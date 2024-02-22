//FILES WRITE AND READ
#include<iostream>
#include<fstream>
using namespace std;
/*
The useful classes for working with files in C++ are: 
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/
//In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
//1. Using the constructor
//2. Using the member function open() of the class

int main(){
    string st = "prakarti";
    string st1;
    //for opening files creating and writing in it
    ofstream out("file1.txt");//write operation
    out<<st;
    //for reading from a file
    ifstream in("file2.txt");//reading operation
    //in>>st1; //>> does not allows spaces and newline
    //cout<<st1; 

    getline(in,st1);
    cout<<st1;
    return 0 ;
}