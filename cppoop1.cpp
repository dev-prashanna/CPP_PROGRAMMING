#include <iostream>
#include <string>
using namespace std;

class College{
    public:
      
      College(string n, string d, string s, double sal){
        name=n;
        department=d;
        subject=s;
        salary=sal;
      }

      string name;
      string department;
      string subject;
      double salary;

};

int main(){
    College t1("mula","maths","topological",12000);
    cout<<t1.department<<endl;
}