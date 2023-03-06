/* Arjun have taken charge as the Dean of the famous Medical college recently.*/

#include <iostream>
using namespace std;
class Patient {
};
class IPD{
};
class IPDPatient : public IPD, public Patient{
    public:
    int no,age,ward,bed,charge,days;
    string name,sex;
    void accept_ipd_patient_details(){
        cin>>name>>age>>sex>>ward>>bed>>charge>>days;
    }
    void display_ipd_patient_details(){
        cout<<"Patient Name:"<<name<<endl;
        cout<<"Patient Age:"<<age<<endl;
        cout<<"Sex:"<<sex<<endl;
        cout<<"Ward No:"<<ward<<endl;
        cout<<"Bed No:"<<bed<<endl;
        cout<<"Charge Per Day:"<<charge<<endl;
        cout<<"No. of Days Admitted:"<<days<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    IPDPatient ipdt[n];
    for(int i=0;i<n;i++){
        ipdt[i].accept_ipd_patient_details();
        ipdt[i].display_ipd_patient_details();
    }
    return 0;
    cout<<"IPDPatient *ipdt;";
}
