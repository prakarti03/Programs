#include<iostream>

using namespace std;

int main(){
    // int age;

    // cout<<"enter age:\n";
    // cin>>age;
    
    //*******selection control structure********if-else-if-else ladder*******
    // if(age>18)
    // {
    //     cout<<"yupppieee!! you can drink alcohol"<<endl;
    // }
    // else if(age==18)
    // {
    //     cout<<"yupppieee!! you can drink alcohol"<<endl;
    // }
    // else if(age<1)
    // {
    //     cout<<"you are not yet born";
    // }
    // else{
    //     cout<<"alas!!!you cannot drink alcohol"<<endl;
    // }
     /*********switch statements*********/
    int age,a;
    cout<<"press 1 to enter rollno.:"<<endl;
    cout<<"press 2 to know your grades:"<<endl;
    cout<<"press 3 to exit:"<<endl;
    cin>>a;
    switch(a){
    case 1:
    {
        cout<<"enter rollno.:\n";
        cin>>age;
        goto jump;
    }
    case 2:
    {
        cout<<"enter rollno.:\n";
        cin>>age;
        jump:{if(age>=1 && age<25)
        {
            cout<<"GRADE A"<<endl;
        }
        else if(age>=25 && age<35)
        {
            cout<<"GRADE C"<<endl;
        }
        else if(age>=35 && age<=50)
        {
            cout<<"GRADE B"<<endl;
        }}
        break;
    }
    case 3:
    {
        break;
    }
    default:
    {
        cout<<"INVALID ROLLNO."<<endl;
    }
    
    }
    

    return 0 ;
}