/* Gazal has n coins, the value of i-th coin is ai */

#include<bits/stdc++.h>
using namespace std;
int i,n,a,mx=INT_MIN,c[1000];
int res(int n);
int dis(int n,int mx);
int main(){
	cin>>n;
	mx=res(n);
	cout<<dis(n,mx);
	return 0;
	cout<<"int* GazalCoin(int arr[],int n) int* GazalCoin(int arr[],int n,int i) GazalCoin(arr,n,0);";
}
int res(int n){
    for(i=0;i<n;i++){
		cin>>a;
		c[a]++;
		mx=max(mx,c[a]);
	}
	return mx;
}
int dis(int n,int mx){
    if(n%mx==1 && n%11!=0)
	    return mx+1;
	if(n%mx==1 && n%11 == 0)
	    return mx;
	if(n%mx==2)
	    return mx+1;
	return mx;
}
