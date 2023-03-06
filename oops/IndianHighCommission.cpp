/* The Indian High Commission structure is heirarchical, that is it can be expressed as a tree */

#include<bits/stdc++.h>
using namespace std;
const int Maxn=1e3;
string s,k[Maxn];
int ans,t;
map <string ,int> mp;
stack<string>hierarchy;
bool name(char a){
    if(a!='.' && a!=',' && a!=':')
        return true;
    return false;
}
int main(){
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(name(s[i]))
            k[t]+=s[i];
        else if(i!=0 && name(s[i-1]))
            hierarchy.push(k[t]),ans+=mp[k[t]],mp[k[t]]++,t++;
        if(s[i]=='.')
            mp[hierarchy.top()]--,hierarchy.pop();
    }
    cout<<ans;
}
