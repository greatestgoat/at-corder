#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
using P = pair<int,int>;
const int MOD = 1000000007;

int main() {
    int n,temp;
    cin>>n;
    set<int> st;
    rep(i,n) {
        cin>>temp;
        st.insert(temp);
    }
    cout<<st.size()<<endl;
} 
