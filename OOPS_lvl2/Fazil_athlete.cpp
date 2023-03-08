/* Fazil is an athelete from his school time */

#include <iostream>
using namespace std;
class student{
    public:
    int reg,ct1,ct2;
    void get(){
        cin>>reg>>ct1>>ct2;
    }
};
class sports{
    public:
    int spm;
    void getsm(){
        int d;
        cin>>d;
        spm=d;
    }
};
class statement:public student,public sports{
    public:
    void display(){
        cout<<reg<<endl<<ct1+ct2+spm<<endl<<(float)(ct1+ct2+spm)/3<<endl;
    }
};

int main()
{
    statement obj;
    obj.get();
    obj.getsm();
    obj.display();
	return 0;
}
