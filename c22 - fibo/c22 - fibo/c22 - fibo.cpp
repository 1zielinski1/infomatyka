#include <iostream>
using namespace std;

void fibo(int n)
{
    int f0, f1, f;
    f0 = 0;
    f1 = 1;
    for (int i = 0; i < n; i++)
    {
        if (i > 1)
        {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        else
        {
            f = 1;
        }
        cout << f;
    }
    return;
}

int main()
{
    int n;
    cout << "podaj ilosc wypisanych wyrazow ciagu: ";
    cin >> n;
    fibo(n);
}