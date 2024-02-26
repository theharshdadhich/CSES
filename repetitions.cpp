#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int maxN = 1e6+5;


int main(){
char S[maxN];

    scanf(" %s", S);
    int N = (int)strlen(S);

    int count = 1;
    int ans = 1;
    for(int i = 1; i<N; i++){
        if(S[i]==S[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        ans = max(ans,count);
    }
    cout<<ans<<endl;
}