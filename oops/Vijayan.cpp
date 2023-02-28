/* Vijayan has got undirected graph consisting on n vertices and m edges. This graph doesn't contain any self loops or multiple edges. */

#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    void edge(){
    }
};
class pairs:public graph{
    public:
    long long int n,m,k=0;
    void vertex(){
        cin>>n>>m;
        cout<<max(0ll,n-2*m)<<" ";
        while(k*(k-1)/2<m) k++;
        cout<<n-k<<endl;
    }
};
int main()
{
    pairs pa;
    pa.edge();
    pa.vertex();
	return 0;
}
