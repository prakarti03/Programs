//open(),close(), eof() use in files
#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream hout;
    string st = "This is kiara advani.\n";
    //connecting our file with 'hout' stream
    hout.open("file1.txt");
    //writing in our file
    hout<<st;
    hout<<"FUCKKKK OPHHH";
    //closing our hout stream buffer
    hout.close();

    //connecting our file with ' hin ' stream for reading char 1by1 using " EOF() "
    ifstream hin;
    string st1;
    hin.open("file1.txt");
    //reading each character 1by1
    while(hin.eof() == 0)
    {
        getline(hin,st1);
        cout<<st1<<endl;
    }
    //closing our hin stream
    hin.close();

    return 0 ;
}