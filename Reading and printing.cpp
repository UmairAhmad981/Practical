#include <iostream>
#include <fstream>
using namespace std;
int main() {
    //reading and printing from file
    ifstream in;
    in.open("abc.txt");

    string str;
    //condition for checking the end of the line of the txt file
    while(in.eof()==0){
        //getting one by one line storing in str
        getline(in,str);
        //printing str
        cout<<str<<endl;
    }
    return 0;
}
