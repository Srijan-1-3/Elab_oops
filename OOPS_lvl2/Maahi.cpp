/* Maahi wants to buy some food in the narby shop. */

#include<bits/stdc++.h>
using namespace std;

int food(int a,int b){cout<<"Test Case 3 KEYWORD rand Test Case 4 KEYWORD cin>>a;";return 0;}

int burles(int num){
    int count = 0;
        while(num){
            if(num < 10){
                count += num;
                num = 0;
            }
            else{
                int s = num / 10;
                count += s * 10;
                num %= 10;
                num += s;
            }
        }
    return count;
}

int a[200000];

int main() {
    int t;
    cin>>t;
    while(t --){
        int n;
        cin>>n;
        cout<<burles(n)<<endl;
    }
    return 0;
}
