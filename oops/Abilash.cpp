/* Abilash has the ambition of joining ISRO */

#include <iostream>

using namespace std;

void h(){}

class ISRO{

    public:virtual void ProblemSolving()=0;

};

class Preparation:public ISRO{

    public:void ProblemSolving(){

        int k,a,b,i,count=0;

        cin>>k>>a>>b;

        for(i=a;i<=b;i++)

            if(i%k==0)

                count++;

        cout<<count;

    }

};

int main()

{   Preparation obj;

    obj.ProblemSolving();

	return 0;

}
