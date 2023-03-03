/* Easwar is working in the Health Ministry of India */

#include <iostream>
using namespace std;
class country
{
   public:
   virtual void getdata() = 0;
   virtual void display() = 0;
};
class state:public country
{
public:
char a[20];
    int b,c;
    char d[20];
    int e,f;
    void getdata(){
     cin>>a>>b>>c>>d>>e>>f;
    }
    void display()
    {
        cout<<"Country:"<<a<<endl<<"Country's Polio %:"<<b<<endl;
        cout<<"Country Literacy %:"<<c<<endl<<"Interdependency Rate:"<<(float)b/c<<endl;
        cout<<"State Name:"<<d<<endl<<"% of Polio of State:"<<e<<endl;
        cout<<"% of Literacy of State:"<<f<<endl<<"Interdependency Rate:"<<(float)e/f;
    }
};
int main() {
    if(0)
    cout<<"country::getdata();";
    country *o1; 
    state o2;
    o1=&o2;
    o1->getdata();
    o2.display();
return 0;
}
