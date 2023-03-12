/* Colonel Sanders routine life is very simple . He starts his day with cooking food, then he eats the healthy food
   and finally preceeds for sleeping thus ending his day.*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    char N[100001];
    cin>>N;
   int r,i,j,temp;
   r=strlen(N);

   char C[r];

  /* for(x=0;x<r;x++)

       C[x]=N[x];*/
       strcpy(C,N);

   for(i=0;i<r;i++)
   for (j=i+1;j<r;j++)



       if(C[i]>=C[j])
      {
        temp=C[i];
        C[i]=C[j];
        C[j]=temp;
      }



  for(i=0;i<r;i++)

  if (C[0]==N[0]&&C[1]==N[1])
 { cout<<"yes\n";
 break;}
  else if (C[i]!=N[i])
 { cout<<"no\n";
 break;}

 
 
}
    return 0;
}
