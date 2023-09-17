#include<iostream>
using namespace std;

// struct emp
// {
//     int id;
//     char name;
// }e;
// int main()
// {
//     e.id=67;
//     e.name='d';

//     cout<<e.id<<endl<<e.name;
//     return 0 ;
// }
 enum week{sunday,monday, tuesday};
int main()
{
        enum week e1;
        e1=monday;
        cout<<e1+1<<"day";
}