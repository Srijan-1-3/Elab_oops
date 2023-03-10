/* Vikram has just started programming, he is in his first year of engineering. Vikram is reading about Relational Operations. */

#include <iostream>
using namespace std;
int main()
{int number1,number2;
 try{
     cin>>number1>>number2;
     if(cin){
             if(number1>number2)
                cout<<">";
             else if(number1<number2)
                cout<<"<";
             else
                cout<<"=";
            }
     else
        throw 0;
    }catch(int no) {cout<<"Input data missing";}
	return 0;
}
