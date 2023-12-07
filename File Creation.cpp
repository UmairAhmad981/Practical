#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream out;
    //if file will be there then it will be opened else it will be created
    out.open("abc.txt");

    string str = "Umair Ahmad";
    
    //String will be stored in abc.txt file in this case Umair Ahmad
    out<<str;
    return 0;
}
