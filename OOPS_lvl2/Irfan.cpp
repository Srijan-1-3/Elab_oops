/* Irfan a travel freak guy in a top university goes to hills in the Himalayas. */

#include<bits/stdc++.h>
using namespace std;
void h(){}

int a,b,c;

int ways(int h1,int k1){
    int dp[k1+1][h1+1];
    for(int i=1;i<=k1;i++)
        dp[i][0]=0;
    for(int j=1;j<=h1;j++)
        dp[0][j]=0;
    dp[0][0]=1;
    for(int i=1;i<=k1;i++){
        for(int j=1;j<=h1;j++){
            dp[i][j]=0;
            if (j>=a)
                dp[i][j]+=dp[i-1][j-a];
            if (j>=b)
                dp[i][j]+=dp[i-1][j-b];
            if (j>=c)
            dp[i][j]+=dp[i-1][j-c];
        }
    }
    return dp[k1][h1];
}

int main(){
    int h,k;
    cin>>h>>a>>b>>c>>k;
    cout<<ways(h,k)%1000000007;
}
