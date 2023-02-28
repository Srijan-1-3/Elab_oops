/* Due to Covid 19 Lockdown in the state rohini who is doing his Undergraduate program in a famous Institution is attending her classes in online mode */

#include <iostream>
using namespace std;
class Assignement{
    public:
    int num;
    void get(){
        cin>>num;
    }
    void display(){
        int count=0;
        while(num!=0){
            count++;
            num/=10;
        }
        cout<<count;
    }
};
class Student:public Assignement{
};
int main()
{
    Student obj;
    obj.get();
    obj.display();
	return 0;
}
