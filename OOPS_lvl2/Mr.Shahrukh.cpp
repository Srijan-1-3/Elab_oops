/* Mr. Shahrukh has given you a binary string S.*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{int i,l,c=0;
char S[1000000];
cin>>S;
l=strlen(S);
for(i=0;i<l-1;i++)
{ if(S[i]==S[i+1])
c++;
else
c=c;
}
cout<<(l-c);
    return 0;
}}
