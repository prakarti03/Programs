//TEMPLATES IN C++

#include <iostream>
using namespace std;
template <class T>

class test
{
    int size;
public:
    T *arr;
    void get(int m)
    {
        size = m;
        arr =  new T [size];
    }
    T gin(test &s)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * s.arr[i];
        }
        return d;
    }
};
int main()
{
    test <float> t;
    test <float> v;
    t.get(3);
    v.get(3);
    //float arr[3];
    t.arr[0] = 4;
    t.arr[1] = 4;
    t.arr[2] = 4;

    v.arr[0] = 4;
    v.arr[1] = 4;
    v.arr[2] = 4;
    
    float a = t.gin(v);
    cout<<a;
    return 0;
}