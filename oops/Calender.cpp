/* The calender allows us to plan our travel and work schedule effectively */

#include <iostream>
using namespace std;
class Date
{
    public: 
    int d;
    void day()
    {
        cin>>d;
    }
};
class check : public Date
{
    public:
    void display()
    {
        switch(d)
        {
            case 1:
            cout<<"Monday";
            break;
            case 2:
            cout<<"Tuesday";
            break;
            case 3:
            cout<<"Wednesday";
            break;
            case 4:
            cout<<"Thursday";
            break;
            case 5:
            cout<<"Friday";
            break;
            case 6:
            cout<<"Saturday";
            break;
            case 7:
            cout<<"Sunday";
            break;
        }
    }
};
int main()
{
    check obj;
    obj.day();
    obj.display();
    return 0;
}
