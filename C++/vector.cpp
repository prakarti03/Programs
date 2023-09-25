#include <iostream>

using namespace std;

class vector
{
    int a[10];
    
public:
    vector()
    {
        for(int i=0;i<10;i++)
        a[i] = 0 ;
    }
    vector(int temp[])
    {
        for(int i=0;i<10;i++)
        a[i] = temp[i];
    }
    friend vector operator*(vector , int);
    friend vector operator*(int , vector);
    void display()
    {
        cout<<"Multiplication table is: "<<endl; 
        for(int i=0;i<10;i++)
          cout<<a[i]<<endl;
    }

};
vector operator*(vector v,int d)
{
    vector x; 
    for(int i=0;i<10;i++)
    { 
         x.a[i] = v.a[i] * d ;
    }
      return x;
}
vector operator*(int e,vector v4)
{
    vector y; 
    for(int i=0;i<10;i++)
    { 
         y.a[i] = e * v4.a[i] ;
    }
      return y;
}
int main()
{  
     int b[10] = {1,2,3,4,5,6,7,8,9,10},c;
     cout<<"enter the no: "<<endl;
     cin>>c;
    vector v1,v2(b),v3;

     v1 = v2 * c;    //-->v1 = operator*(v2,c)

     v3 = c * v2;   //-->v3 = operator*(c,v2)

     v1.display();
     v3.display();

    return 0;
}