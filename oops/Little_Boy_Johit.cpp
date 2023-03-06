/* Little boy Johit likes to draw. Not long ago he bought a rectangular graph sheets with n rows and n columns. */

#include<bits/stdc++.h>
using namespace std;
int n,m,sx=99999,sy=99999,x,y;
char a[55][55];
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]=='*'){
                x=max(x,i),y=max(y,j),sx=min(sx,i),sy=min(sy,j);
            }
        }
    }
    for(int i=sx;i<=x;i++){
        for(int j=sy;j<=y;j++) cout<<a[i][j];
        cout<<endl;
    }
    return 0;
    cout<<"vector<vector<char>>drawing(n,vector<char>(m,'0')); drawing[row][col]";
}
