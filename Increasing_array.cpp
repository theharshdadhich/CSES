#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int maxN = 1e6+5;


int main(){

    int n;
    cin>>n;

    int ans = 0;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    if(arr[i-1]>arr[i]) ans += arr[i-1]-arr[i];
    }
    cout<<ans<<endl;
}