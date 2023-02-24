/* Central goevt toll booth is located at Pamban bridge. A car passing by the booth is expected to pay a toll */

#include <iostream>
using namespace std;
class TollBooth
{
    public:
    int cars;
    float tollcollected;
    TollBooth(){
        cars=0;
        tollcollected=0;
    }
    void payingcar(double pay){
        cars++;
        tollcollected+=pay;
    }
    void nonpayingcar(){
        cars++;
    }
    void display(){
        cout<<cars<<endl<<tollcollected<<endl;
    }
};
int main()
{
    TollBooth obj;
    char VehicleNo[10];
    float TollAmt;
    int carpassed,i;
    cin>>carpassed;
    for(i=0;i<carpassed;i++)
    {
        cin>>VehicleNo>>TollAmt;
        if(TollAmt>0) obj.payingcar(TollAmt);
        else obj.nonpayingcar();
    }
    obj.display();
    return 0;
}
