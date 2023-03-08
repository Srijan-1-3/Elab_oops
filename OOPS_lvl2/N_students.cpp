/* There are N students living in the dormitary of state university.*/

#include<iostream>
using namespace  std;
int main()
{
    int testcase,i;
    cin>>testcase;
    while(testcase!=0){
        int t,n,a[10002],b[10002];
        t=0;cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        
        }
        for(i=n;i>0;i--){
            a[i]=a[i]-a[i-1];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
            if(a[i]>=b[i])
                t++;
        }
        cout<<t<<endl;
        testcase--;
    }
    return 0;
}
