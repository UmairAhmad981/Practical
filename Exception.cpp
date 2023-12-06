#include <iostream>
using namespace std;


int main(){
    double n,d;
    cout<<"Enter Numeritor ";
    cin>>n;
    cout<<"Enter Denominator ";
    cin>>d;

    double t;
    try{
        if(d==0)
            throw(0);
        t=n/d;   
        cout<<"Ans = "<<t;
    }
    catch(int a){
        cout<<"Divided By Zero Error ";
    }
}
