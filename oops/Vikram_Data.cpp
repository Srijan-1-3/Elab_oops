/* Vikram is a Data Collection Officer in Tamil Nadu School Educational Department */

#include <iostream>
using namespace std;
class School{
    public:
    int roll;
    string name;
    virtual void getdata(){};
    virtual void display(){};
};
class District : public School{
    void getdata();
    void display();
};
void District :: getdata(){
        cin>>roll>>name;
    }
void District :: display(){
        cout<<"Student Name is: "<<name<<endl<<"Student Roll no is: "<<roll;
    }
int main()
{
    District obj;
    School* ptr;
    ptr = &obj;
    ptr -> getdata();
    ptr -> display();
	return 0;
}
