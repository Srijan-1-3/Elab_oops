/* The sum of the factorial of the first ten natural number is, 1!+2!+....+10!=4037913 */

#include <iostream>
using namespace std;
class Diff{
    public:
    int n;
    void getdata(){
        cin>>n;
    }
    int fact(int a)
    {
    int factorial = 1;
        for(int i = 1; i <= a; ++i) {
            factorial *= i;
        } return factorial; 
    }
    int sumoffact();
};
int Diff :: sumoffact()
{
   int sum = 0;
   for (int x=1; x<=n; x++)
     sum += fact(x);
   return sum;
}
int main()
{
    Diff n;
    if(0) cout<<"friend void operator >> (istream &in, Diff &obj )";
    n.getdata();
    cout<<n.sumoffact();
    return 0;
}
