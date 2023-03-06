/* In a bank, different customers have savings account */

#include <iostream>
using namespace std;
class customer{
    public:
    int no;
    long long int mobile;
    string name;
    void acceptc(){
        cin>>name>>mobile>>no;
    }
};
class deposit:public customer{
    public:
    int bal;
    void acceptd(){
        cin>>bal;
    }
    void dispd(){
        cout<<"Customer Name:"<<name<<endl;
        cout<<"Customer Phone No:"<<mobile<<endl;
        cout<<"Customer A/c No:"<<no<<endl;
        cout<<"Balance:"<<bal<<endl;
    }
};
class borrow:public deposit{
    public:
    long long int loan_no,amt;
    void acceptb(){
        cin>>loan_no>>amt;
    }
    void dispb(){
        cout<<"Loan No:"<<loan_no<<endl;
        cout<<"Loan Amount:"<<amt<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    borrow b1[n];
    for(int i=0;i<n;i++){
        b1[i].acceptc();
        b1[i].acceptd();
        b1[i].acceptb();
        b1[i].dispd();
        b1[i].dispb();
    }
	return 0;
}
