/* In Disgaea as in most role playing games, characters have techniques that determine the character's ability to use certain spells or weapons */

#include<bits/stdc++.h>
using namespace std;
int n,m;
double k,x;
map<string,int> mp;
string s;
int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++) 
    {
        cin>>s>>x;
        x*=k;
        if(x>=100) mp[s]=int(x+1e-6);
    }
    while(m--)
    {
        cin>>s;
        if(!mp[s]) mp[s]=0;
    }
    cout<<mp.size()<<endl;
    for(auto c:mp)
    {
        cout<<c.first<<" "<<c.second<<endl;
    }
    return 0;
    cout<<"std::map<std::string,int>techniqueMap; techniqueVec.end() techniqueVec.begin()";
    cout<<"std::vector<std::string>techniqueVec; std::map<std::string,int>::iterator mapIter;";
}
