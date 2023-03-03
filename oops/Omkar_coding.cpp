/* Omkar is mad about coding , that is why he writes encoded messages. */

#include <iostream>
#include<string>
using namespace std;
class Decode{
    public:virtual void Convert()=0;
};
class Word:public Decode{
    public:
    string s1,s2;
    int n;
    void Convert(){
        cin>>n>>s1;
        for(int i=0;i<n;i++){
            if((n-i)%2==1)
			s2=s2+s1[i];
			else
			s2=s1[i]+s2;
        }
        cout<<s2;
        }
};
int main()
{
    Word obj;
    obj.Convert();
}
