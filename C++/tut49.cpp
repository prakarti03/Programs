//virtual function program
#include <iostream>
using namespace std;

class cwhtutorial
{
protected:
    string title;
    float rating;
public:
    cwhtutorial(string a, float r)
    {
        title = a;
        rating = r;
    }
    virtual void display()= 0; // do-nothing---> Pure virtual function
};
class cwhtextual{
    protected:
    int words;
    public:
     cwhtextual(int w)
     {
      words = w;
     }
     void display(){
        cout<<"This is  class cwh TEXTUAL."<<endl;}
};
class cwhvideo:public cwhtutorial,public cwhtextual
{
  protected:
  float length;
  public:
    cwhvideo(string a,float r,int w,float l):cwhtutorial(a,r),cwhtextual(w)
    {
        length = l;
    }
     void display()
    {
     cout<<"This is an amazing cwh tutorial with video: "<<endl;
     cout<<"The CWH tutorial title is: "<<title<<endl;
     cout<<"The CWH tutorial video has "<<rating<<" rating"<<endl;
     cout<<"The CWH tutorial video timing is "<<length<<" minutes"<<endl;
    }
        
};
int main()
{
    cwhvideo c("flying bird",4.98,967,7.81);
    c.display();
    
    cwhtutorial* c1;
    c1 = &c; 
    c1->display();

    c.cwhtextual::display();
    return 0;
}