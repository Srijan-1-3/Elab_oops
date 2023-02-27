/* There are n nobles, numbered from 1 to n. Noble i has the power of i. */

#include <bits/stdc++.h>
using namespace std;
int u,v, q, n, m, o;
void change(int u){

}
void change(int u,int v)
{

}
int ind[200005], cnt;
int main(){
    cin>>u>>v; cnt=u;
    while(v--){
        cin>>n>>m;
        if((ind[min(n, m)]++)==0)cnt--;
    }
    cin>>q;
    while(q--){
        cin>>o;
        if(o==3)cout<<cnt<<'\n';
        else{
            cin>>n>>m;
            if(o==1){
                if((ind[min(n, m)]++)==0)cnt--;
            } else {
                if((--ind[min(n,m)])==0)cnt++;
            }
        }
    }
    return 0;
}
