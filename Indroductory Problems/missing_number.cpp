#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    vector<int> s(n);
    for(int i = 0; i<n-1; i++){
        cin>>s[i];
    }

    ll ans = 0;
    for(int i = 1; i<=n; i++){
        ans ^=i;
    }

    for(auto i = 0; i<(int)s.size(); i++){
        ans^= s[i];
    }
    
    cout<<ans<<endl;
}