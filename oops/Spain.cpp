/* In Spain, there is a national holiday coming. In the honor of this event the president of the country decided to make a big dance party and asked Diano's agency to 
   organize it */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[100006],c[3];
int main()
{
    ll n,m,i,j,k,l,sum=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            cin>>c[j];
            sum=sum+a[c[j]];
        }
        l=1;
        for(k=0;k<3;k++)
        {
            if(l==sum)
                l++;
            if(a[c[k]]==0)
            {
                a[c[k]]=l++;
            }
        }
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
    cout<<"map<int,int>dance; set<int>dancer;";}
