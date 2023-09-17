//transposing matrix using returning objects
#include <iostream>
using namespace std;

class matrix
{
    int i, j, a[10][10], b[10][10], c[10][10];

public:
    void read()
    {
        cout << "enter elements of a[3][3]" << endl;
        for (i = 1; i <= 3; i++)
        {
            for (j = 1; j <= 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        // cout << "the transpose of the matrix is:" << endl;
        // for (i = 1; i <= 3; i++)
        // {
        //     for (j = 1; j <= 3; j++)
        //     {
        //         b[i][j] = a[j][i];
        //         cout << b[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        cout << "the transposed  matrix is:" << endl;
        for (i = 1; i <= 3; i++)
        {
            for (j = 1; j <= 3; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << "\n";
    }}
    friend matrix trans(matrix);
};
matrix trans(matrix m)
{
    matrix m3;
  for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
               m3.b[i][j] = m.a[j][i];
                
            }
        }
        return m3;
}

int main()
{
    matrix m1,m2;
    m1.read();

    m2=trans(m1);
    m2.display();

    return 0;
}