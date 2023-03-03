/* Fazil likes tea very much and today he wants to drink exactly n cups of tea. */

#include <iostream>
using namespace std;
class Tea
{
public:virtual void Cup()=0;};
class Drink:public Tea
{public:int n, k, a, b, x, y;
    void getData()
    {cin >> n >> k >> a >> b;x = a;y = b;}
    void Cup()
    {for (int i = 0; i < n; i++)
        {for (int j = 0; j < k; j++)
            {if (y > x)
                {if (b > 0)
                    {cout << "B";b--;
                    }}else{if (a > 0)
                    {cout << "G";a--;}}}
            if (y > x)
            {if (a > 0)
                {cout << "G";a--;}}
            else
            { if (b > 0)
                {cout << "B";b--;}}}}};
int main()
{
    Drink obj;
    obj.getData();
    obj.Cup();
    return 0;
}
