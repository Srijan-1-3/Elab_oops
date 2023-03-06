/* In a bank, different customers have savings account. So bank always maintains information about bank depositers. */

#include <iostream>
using namespace std;
class acc{
    public:
    int no;
    void getacc(){
        cin>>no;
    }
};
class branch:public acc{
    public:
    string name;
    int code;
    void getbranch(){
        cin>>name>>code;
    }
    void display(){
        cout<<"Acc No:"<<no<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Branch Code:"<<code<<endl;
    }
};
int main()
{
    branch b;
    b.getacc();
    b.getbranch();
    b.display();
    return 0;
}
