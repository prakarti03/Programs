//PROTECTED ACCESS SPECIFIER
#include<iostream>
using namespace std;

class base
{
    protected:
        int a;
    private:
        int b;
        public:
        void getin(){
            a = 10;
            b = 20;
        }
        int getout(){return b;}
};
/*FOR PROTECTED SPECIFIER:
                        private derivation      public derivation      protected derivation
    
    1.Private members        Not inherited      Not inherited          Not inherited       
    2.protected members      private            protected              protected   
    3.public members         private            public                 protected   
 
*/
class derived:protected base
{
    public:
      void display()
      {
        getin();
        cout<<a<<endl;
        cout<<getout();
      }
};
int main(){
    base b1;
    derived d;
    //cout<<d.a;  WILL NOT WORK BCZ A IS PROTECTED IN BOTH BASE AS WELL AS DERIVED CLASS
    d.display();
    return 0 ;
}