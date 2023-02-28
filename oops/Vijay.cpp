/* Vijay have taken charge as the Dean of the famous Medical college recently. */

#include <iostream>
using namespace std;
class doctor{
    public:
    string name,degree,pname;
    int no;
    void getedu(){
        cin>>name>>degree>>pname;
    }
    void getdata(){
        cin>>no;
    }
    void dispedu(){
        cout<<"Doctor Name:"<<name<<endl<<"Doctorate Degree:"<<degree<<endl<<"Patient Name:"<<pname<<endl;
    }
    void dispdata(){
        cout<<"Bed Number:"<<no;
    }
};
class patient:public doctor{
};
int main()
{
    patient p;
    p.getedu();
    p.getdata();
    p.dispedu();
    p.dispdata();
	return 0;
}
