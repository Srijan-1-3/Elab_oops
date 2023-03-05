/* Bharat loves to experiment with strings and one fine day he decided to check if two names matches with each other. */

#include <iostream>
using namespace std;
int main()
{
    string str1,str2;
    try{
        cin>>str1>>str2;
        int count, n=str1.size();
        if(cin){
            for(int i=0;i<n;i++){
                if((str1[i]>=48 && str1[i]<=57) || (str2[i]>=48&&str2[i]<=57) )
                throw 0;
                if(str1[i]==str2[i])
                count++;
            }
            if(count!=n)
            cout<<str1<<" is not "<<str2;
            else
            cout<<str1<<" is "<<str2;
        }
    }
    catch (int i){
        cout<<"Inappropriate Input";
    }
    return 0;
}
