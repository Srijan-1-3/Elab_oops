/* Fazil is running a typewriting practice classes for students. */

#include <iostream>
using namespace std;
class staff{
    public:
    int code,speed;
    string name;
    void getdata();
    void display();
};
void staff::getdata(){
    cin>>name>>code>>speed;
}
void staff::display(){
    cout<<"Name:"<<name<<endl<<"Code:"<<code<<endl<<"Speed"<<speed;
}
class typist: public staff{
    public:
    void getdata();
    void display();
};
void typist::getdata(){
    cin>>name>>code>>speed;
}
void typist::display(){
    cout<<"Name:"<<name<<endl<<"Code:"<<code<<endl<<"Speed:"<<speed;
}
int main()
{
    typist t;
    t.getdata();
    t.display();
	return 0;
}
