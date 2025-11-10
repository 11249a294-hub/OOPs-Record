#include<iostream>
using namespace std;
class patient {
    public:
      int patientID;
      string name;
      string disease;

      void set_patient(int id,string n,string d)
      {
        patientID=id;
        name=n;
        disease=d;
      }
      void show_patient();

};
  void patient::show_patient()
  {
    cout<<"patient ID:"<<patientID
      <<",name:"<<name
      <<",disease:"<<disease<<endl;

  }
    int main()
    {
        patient p1,p2;
        p1.set_patient(301,"arjun","fever");
        p2.set_patient(302,"meena","fever");
        p1.show_patient();
        p2.show_patient();
        return 0;
    }