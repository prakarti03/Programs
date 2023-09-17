//***********memory allocation and arrays in classes*********
#include <iostream>
#include <string.h>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    string itemname[100];
 

public:
   int counter;
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "enter the number of items:" << endl;
    cin >> counter;
    for (int i = 0; i < counter; i++)
    {
        cout << "enter the " << i + 1 <<" item id:"<< endl;
        cin >> itemid[i];
        cout << "enter the " << i + 1 <<" item price:"<< endl;
        cin>>itemprice[i];
        cout << "enter the " << i + 1 <<"item name:"<< endl;
        cin>>itemname[i];
    }
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of "<<itemname[i]<<" at "<<itemid[i]<<" ID no. is Rs."<<itemprice[i]<<endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}