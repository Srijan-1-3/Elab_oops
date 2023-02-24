/* Indian Army have decided to create a group of innovative developments fo Strengthen Cyber Security of Indian Army consisting from 5 to 7 people and hire new employees
   for it */

#include <iostream>
using namespace std;
class IndianArmy
{
    long long int n,sum=0;
    public:int ResumesofCamdidates()
    {
        cin>>n;
        sum=(n)*(n-1)*(n-2)*(n-3)*(n-4)/120+n*(n-1)*(n-2)*(n-3)*(n-4)*(n-5)/720+n*(n-1)*(n-2)*(n-3)*(n-4)*(n-5)*(n-6)/5040;
        cout<<sum;
        return 0;
    }
};
int main()
{
    IndianArmy GroupingofResumes;
    GroupingofResumes.ResumesofCamdidates();
return 0;
}
