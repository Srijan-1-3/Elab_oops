/* On one beautiful sunday Selvan went to Aaron's house for exam preparation */

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float num1,num2;
    double resnum1,resnum2;
    resnum1=0;
    resnum2=resnum1;
    cin>> num1>>num2;
    std::setprecision(6);
    cout <<fixed<< num1  << endl <<fixed <<num2<<endl;
    return resnum2;
}
