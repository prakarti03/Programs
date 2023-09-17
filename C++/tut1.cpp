#include<iostream>
#include<cstdio>
using namespace std;
int main()
    {    //******built in datatypes****************
        // int a=5,b=10;
        // char c[10]="prakarti";//string usage
        // //c=a+b;
        // cout<<"the value of a is "<<a<< " \nthe value of b is" <<b<<"\nNow,their sum is "<< (a+b);
        // cout<<"\n"<<c;

        //**************float,lond,double literals************
        // float d =34.4f;
        // long double e =34.4l;
        // cout<<"size of 34.4 is "<<sizeof(34.4)<<endl;//a decimal no. is by default considered to be double no.,we have to specify the type of no. if we are passing values to a function
        // cout<<"size of 34.4f is "<<sizeof(34.4f)<<endl;
        // cout<<"size of 34.4F is" <<sizeof(34.4F)<<endl;
        // cout<<"size of 34.4l is "<<sizeof(34.4l)<<endl;
        //  cout<<"size of 34.4L is" <<sizeof(34.4L)<<endl;

        // *********reference variables****************
        // int x=450;
        // int &y=x;
        // cout<<x<<endl;
        // cout<<y<<endl;

        //******typecasting******************
        int a=45;
        float b=45.46333;

        cout<<"value of a is "<<float(b)<<endl;
        cout<<"value of b is "<<int(b)<<endl;
        int c=int(b);

        cout<<"value of c is "<<c<<endl;

        cout<<"the sum is "<<a+b     <<endl  ;      
        cout<<"the sum is "<<a+int(b)<<endl;      
        cout<<"the sum is "<<a+(int)b<<endl;      
           
        return 0;
    }
