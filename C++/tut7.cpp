#include<iostream>

using namespace std;

int main(){
    // int a[10]={45,67,88,90,97,66,43};
    // int *p;
    // p=a;
    // for(int i=0;i<7;i++)
    // {
    //     cout<<*(p)<<endl;
    //     p++;
    // }

    char arr[25][25];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
             cin>> arr[i][j];
        }
        
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
             cout<<arr[i][j];
        }
        cout<<endl;
    }
     
    return 0 ;
}