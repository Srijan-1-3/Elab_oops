/* Devarajan already staying rental house, He wants to move to his own house in Mumbai city. */

#include <iostream>
using namespace std;
class Shape
{
    public: int t;
};
class PaintCost
{
    public: int q;
};
class Rectangle:public Shape,public PaintCost
{
    public: void fun()
    {
        int y,x;
        cin>>x>>y;
        cout<<"Total area:"<<x*y<<endl;
        cout<<"Total paint cost:$"<<x*y*70;
    }
};
int main()
{
    Rectangle Rect;
    Rect.fun();
    return 0;
}
