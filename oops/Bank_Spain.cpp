/* Bank of Spain have been opened again after the major heist by professor Sergio and Gang. */

#include <bits/stdc++.h>
using namespace std;
void sum(){}
int n,m;
vector <int> use[2020];
int cost[2020];
string g[1010];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>g[i];
        for(int j=0;j<m;j++)
        {
            if(g[i][j]=='#')
            {
                use[i].push_back(j+n);
                use[j+n].push_back(i);
            }
        }
    }

    queue<int>BankChamber;
    BankChamber.push(n-1);
    cost[n-1]=1;
    while(!BankChamber.empty())
    {
        int t=BankChamber.front();
        BankChamber.pop();
        int z=use[t].size();
        for(int i=0;i<z;i++)
        {
            if(cost[use[t][i]]==0)
            {
                cost[use[t][i]]=cost[t]+1;
                BankChamber.push(use[t][i]);
            }
        }
    }
    cout<<cost[0]-1<<endl;
    sum();
    return 0;
    cout<<"BankChamber.push(n);";
}
