
#include <iostream>
using namespace std;

class Biodata{
  string name;
  int Rollno;
  float marks;
  
  public:
    Biodata(string a,int b,float c){
        name = a;
        Rollno = b;
        marks = c;
    }
    void show(){
        cout<<"Name = " << name<<endl;
        cout<<"Roll No. = "<<Rollno<<endl;
        cout<<"Marks = "<<marks<<endl;
    }
};

int main(){
    Biodata b("Umair",4055,99);
    b.show();
}
