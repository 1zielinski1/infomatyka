// c20 - NWD.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int iloczyn;
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >> b;
    iloczyn = a * b;
    while (a!=b){
        if (a < b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
        
    }
    cout << "NWD: " << a << endl;;
    cout << "NWW: " << iloczyn/a;

}
    