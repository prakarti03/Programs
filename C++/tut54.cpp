#include<iostream>
using namespace std;

template <class T1 ,class T2>
void swapp(T1 &a,T2 &b)
{
  T2 temp = a;
  a = b;
  b = temp;
}
template <class T1 ,class T2>
float avgofnumbers(T1 a,T2 b)
{
	return (a+b)/2;
}
void func(int a)
{
	cout<<"I am func() "<<a<<endl;
}
template <class T>
void func(T a)
{
	cout<<"I am templatised func() "<<a<<endl;
}
template <class T>
void func1(T a)
{
	cout<<"I am templatised func1() "<<a<<endl;
}

int main(){
	float a;float b;
	cin>>a>>b;
	float d = avgofnumbers(a,b);
	cout<<d<<endl;
    swapp(a,b);
	cout<<a<<endl<<b<<endl;	
	func(6);
	func(6.77);
	func1(54);
	return 0 ;
}