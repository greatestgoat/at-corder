#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int b, f, r, v;

    static int collage[4][3][10];

    for (int i = 0; i < n; i++) {
        cin >> b >> f >> r >> v;
        collage[b - 1][f - 1][r - 1] += v;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 9; k++) {
                cout << int(collage[i][j][k]) << " ";
            }
            cout << int(collage[i][j][9]) << endl;
        }
        if (i < 3) {
            cout << "####################" << endl;
        }
    }
}
