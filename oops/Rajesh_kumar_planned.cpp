/* Rajesh kumar planned to invite the party for dinner. */

#include<bits/stdc++.h>
using namespace std;
int i,T,a,b,c,n;
#define f(i,a,n) for(i=a;i<n;i++)
class solve{
    public:
    void get(){
        std::cin>>a>>b>>c;
        n=2*abs(a-b);
    }
    void get2(){
        if(c>n||max(a,b)>n)
        cout<<"-1"<<endl;
        else if(c>n/2)
        cout<<c-n/2<<endl;
        else
        cout<<c+n/2<<endl;
    }
};
int main(){
	cin>>T;
	solve p;
	f(i,0,T){
	p.get();
	p.get2();
	}
	return 0;
	cout<<"void pline(int v[],int n) void pline(int v) else if(x>n||x<=0)";
}
