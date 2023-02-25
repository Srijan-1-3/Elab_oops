/* Tamil Nadu has received lot of complaints regarding electricity board billing process from the customers */

#include <iostream>
using namespace std;
void print_bill();
class Electricity{
    public:
        float unit,res;
        int n;
        void print_bill();
        void input();
        void output(){
            cout<<res<<endl;
        }
};
void Electricity::input(){
    cin>>unit;
    for(int i=0;i<unit;i++){
        Electricity e[i];
        cin>>e[i].n;
        e[i].print_bill();
    }
}
void Electricity::print_bill(){
    (n<=300) ? res = n * 0.4 : res = n * 0.6;
    output();
}
int main(){
    Electricity elc;
    elc.input();
	return 0;
}
