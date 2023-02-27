/* Elavenil is the working in Survey of India, The National Survey and Mappiny Organization of the country under the 
   department of Science and Technology, whic is the oldest Scientific Department of the Government of India. */

#include <iostream>
using namespace std;
class TestClass{
    public:
    class Country{
        public:
        Country(){cout<<"Country:INDIA"<<endl;}
        Country(char statename[100],int area,int density){
            cout<<"State:"<<statename<<endl;
            cout<<"Area:"<<area<<endl;
            cout<<"Density:"<<density<<endl;
        }
    };
};
int main()
{
    TestClass::Country ob1;
    char statename[100];
    int area,density;
    cin>>statename>>area>>density;
    TestClass::Country statesofindia(statename,area,density);

    return 0;
}
