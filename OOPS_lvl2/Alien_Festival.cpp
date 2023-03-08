/* The alien festival is upon us, and all the aliens of the space gathered to participate in the procession. */

#include<iostream>
using namespace std;
int main()
{
    char report[501];
    int test,i,n;
    cin>>test;
    while(test--){
        int count=0;
        cin>>n;
        cin>>report;
        for(i=0;i<n;i++){
            if(report[i]=='H')
            count++;
            if(report[i]=='T')
            count--;
            if(count<0||count>1){
                break;
            }
        }
        if(count==0)
        cout<<"Valid\n";
        else 
        cout<<"Invalid\n";
    }
    return 0;
}
