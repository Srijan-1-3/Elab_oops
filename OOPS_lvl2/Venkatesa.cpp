/* Venkatesa Raja is a national award winning craft artist who is famous for his  "Bhaktakrisha" */

#include <iostream>
using namespace std;
int main()
{int A[10][10],t,n,i,j;
cin>>t;
while(t--)
 { cin>>n;
     for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)

    cin>>A[i][j];

}

for(j=1;j<=n;j++)

{for(i=n;i>=1;i--)

cout<<A[i][j]<<" ";

}
cout<<"\n";
}
    return 0;
}
