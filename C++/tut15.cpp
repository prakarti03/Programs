//passing arguments from function to another and friends function usage**********
#include<iostream>

using namespace std;
class complex
{
    int a;
    int b;
    public:
    void setdata(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    //below line means that non member sumcomplex is allowed to access the private parts of complex

    friend complex sumcomplex(complex o1,complex o2);//here objects 'complexo1,o2' has been taken as arguments
    /*void setdatabysum(complex o1,complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }*/
    void displaydata(void)
    {
        cout<<"the sum of complex no. is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1,complex o2)
{
    complex o3;                //created one more object of complex class ki friend ne
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
   
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.setdata(1,2);
    c1.displaydata();

    c2.setdata(3,4);
    c2.displaydata();

    sum=sumcomplex(c1,c2);
    sum.displaydata();


    //c3.setdatabysum(c1,c2);
    //c3.displaydata();
    return 0 ;
}
/*properties of friend function

1. not the member of class
2. since it is not the member of class,it cannot be called from object of class.
        -->c1.sumcomplex()==invalid
3. it can be called without thw help of objects
4. usually contains the objects as arguments
5. can be declared inside public or private section of the class
6. it cannot access the class members directly by their names and needs [object_name.member_name]
  to access members. suppose {cout<<a;}means nothing     
      
*/