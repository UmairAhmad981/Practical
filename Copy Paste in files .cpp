#include <iostream>
#include <fstream>
using namespace std;
int main() {
    //reading and printing from file
    ifstream in;
    ofstream out;
    //Opening abc file from which we will read and copy
    in.open("abc.txt");

    //Opening file in which content will be pasted
    out.open("xyz.txt");

    string str;
    
    //condition for checking the end of the line of the txt file
    while(in.eof()==0){

        //getting one by one line storing in str
        getline(in,str);

        //putting every line in out which is xyz.txt file
        out<<str<<endl;
    }
    return 0;
}
