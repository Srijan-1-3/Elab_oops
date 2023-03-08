/* There are n programmers that you want to split into several non-empty teams. */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
void h(){}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,x,i,cnt=0,ans=0;
        vector<ll>v;
        
        cin>>n>>k;
        
        for(ll i=1;i<=n;i++)
            cin>>x, v.push_back(x);
        
        sort(v.begin(), v.end());
        
        for(i=v.size()-1; i>=0; i--){
            cnt++;
            if(cnt*v[i]>=k)
                cnt=0,ans++;
        }
        
        cout<<ans<<endl;
    }
    return 0;
    cout<<"Test Case 1 KEYWORD int split(int a,int b) Test Case 2 KEYWORD int splitNum(int a,int b) Test Case 3 KEYWORD void cmemoInit() Test Case 4 KEYWORD cin>>n>>x;";
}
