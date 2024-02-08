//  PRACTICE INERITANCE PROGRAM
#include<iostream>
#include<math.h>
using namespace std;

class simple_cal
{
  private:
    int a,b;
  public:
    void utility()
    {
    cout<<"Enter 2 values:\n";
    cin>>a>>b;} 
    int multiply(){ return a*b;}
    int subtract(){ return a-b;}
    int add(){return a+b;}
    int divide(){return a/b;}
    void display(){
        cout<<"\nSIMPLE CALCULATOR.\n";
        cout<<"Multiplication is: "<<multiply()<<endl;
        cout<<"subtraction is: "<<subtract()<<endl;
        cout<<"Addition is: "<<add()<<endl;
        cout<<"Division is: "<<divide()<<endl;
    }
};
class scientific_cal
{
   private:
    int a;
   public:
    void utility()
    {cout<<"\nSCIENTIFIC CALCULATOR.\n";
    cout<<"Enter any value:\n";
    cin>>a;} 
    float Sin(){ return sin(a);}
    float Cos(){ return cos(a);}
    float Tan(){ return tan(a);}
    float LOG(){ return log(a);}
    void display()
    {
        cout<<"Sin(x) is: "<<Sin()<<endl;
        cout<<"Cos(x) is: "<<Cos()<<endl;
        cout<<"Tan(x) is: "<<Tan()<<endl;
        cout<<"LOG(x) is: "<<LOG()<<endl;
    }
};
class hybrid_cal : public simple_cal , public scientific_cal
{
   
};
int main(){
   hybrid_cal H;
   H.simple_cal::utility();
   H.simple_cal::display();
   H.scientific_cal::utility();
   H.scientific_cal::display();
    return 0 ;
}