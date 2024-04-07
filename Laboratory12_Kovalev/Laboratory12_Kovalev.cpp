#include <iostream>
using namespace std;


void Sort(int b[15])
{
    int temp = 0;
    for (int i = 0; i < 15; i++)
    {
        for (int i = 0; i < 14; i++)
        {
            if (b[i] > b[i + 1])
            {
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }
    for (int j = 0; j < 15; j++)
    {
        cout << b[j] << '\t';
    }
}


int main()
{
    int a[10][15], max1=0, b[15];
    for (int j = 0; j < 15; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            a[i][j] = rand() % 20;
            if (a[i][j] > max1)
                max1 = a[i][j];
        }
        b[j] = max1;
        max1 = 0;
    }
    cout << "Full matrix\n";
    for (int i = 0; i < 10; i++)\
    {
        for (int j = 0; j < 15; j++)
        {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl << "Max volume matrix\n";
    for (int j = 0; j < 15; j++)
    {
        cout << b[j] << '\t';
    }
    cout << endl << "Sort max volume matrix\n";
    Sort(b);
}
