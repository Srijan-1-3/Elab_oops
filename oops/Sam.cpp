/* Sam Curran and Robin Uthappa are preparing for the next IPL matches with a training session */

#include <iostream>
using namespace std;
class Sam{
};
class Robin:public Sam{
    public:
    int rows;
    void read(int y){
        rows=y;
    }
    void display(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<rows;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Robin obj;
    int y;
    cin>>y;
    obj.read(y);
    obj.display();
    return 0;
}
