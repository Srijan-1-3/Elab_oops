/* Nandhan is busy working on a nw browser called 'MrSen'. He is responsible for the autocomplete funcctionality of the browser */

#include<bits/stdc++.h>
using namespace std;
int i,n;
string s,t,u;
int D()
{
    for(i=0;s[i];i++)if(s[i]^t[i])return 0;
    return 1;
}
int main()
{
    for(cin>>s>>n;n--;)
    {
        cin>>t;
        if(D()&&(u.empty()||t<u))u=t;
    }
    if(u.empty())cout<<s;
    else cout<<u;
    return 0;
    cout<<"unordered_map<string,string>website; map<string,bool>searchlist; cin>>n;";
}
