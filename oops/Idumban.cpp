/* Idumban Karri's friend Soman Santhavan given him two integers n and k */

#include<iostream>
using namespace std;
class Problem {
    public:virtual void Divisor()=0;
};
class Calculation:public Problem{
    public:
        int n,k,i;
        void Divisor(){
        cin>>n>>k;
        }
        int Display()
        {
            int count;
        for(i=1;i<=n;++i)
        {
            if(n%i==0)
            {
                count++;
                if(count==k){
                    cout<<i;
                    return 1;
                    }
            }
        }
        cout<<-1;
        return 1;
    }
};
int main()
{
    Calculation obj;
    obj.Divisor();
    obj.Display();
    return 0;
}
