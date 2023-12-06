
#include <iostream>
using namespace std;

template <class T>
T addition(T a, T b){
    return a+b;
}
template <class T>
T subtraction(T a, T b){
    return a-b;
}

int main(){
    cout<<"Addition = "<< addition<int>(5,6)<<endl;
    cout<<"Subtraction "<< subtraction<int>(5,6);
}
