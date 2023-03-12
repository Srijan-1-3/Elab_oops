/* Nirobi have given a matrix C of size N x M to Rio.*/

#include <iostream> 
using namespace std;
int main() {
    int t; cin>>t; 
    while(t--) {
        int m,n;
        cin>>m>>n;
        int C[m][n];
        for(int i = 0; i < m;i++) {
            for(int j = 0; j < n; j++) {
            cin>>C[i][j]; 
            }
        }
        int a,b,x,y; cin>>a>>b>>x>>y;
        int sum = 0;
        for(int i = a-1; i <= x-1;i++) {
            for(int j = b-1; j <= y-1; j++) {
            sum += C[i][j]; 
            }
        } 
        cout<<sum<<"\n";
    }
    return 0;
}
