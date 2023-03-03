/* Sundar is training for the GATE examinations on his own */

#include <bits/stdc++.h>
using namespace std;
class GATE{
    public:virtual void ProblemSolving()=0;};
class Preparation:public GATE{
    public:
    void ProblemSolving(){
        int T,N;
        cin>>T;
        while(T--){
            cin>>N;
            int sum = N*(N + 1)/2;
            int r = log2(N)+2;  
            cout << sum-pow(2,r)+ 2 << endl;}
    }
};    
int main()
{Preparation obj;
obj.ProblemSolving();
    return 0;
}
