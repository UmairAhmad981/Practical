
#include <iostream>
using namespace std;

int main() {
    int a=0;
    int b=1;
    int c;
    int n;
    cout<< a <<" , "<<b<<" , ";
    for(int i=0;i<10;i++){
        c=a+b;
        cout<<c<< " , ";
        a=b;
        b=c;
    }
}
