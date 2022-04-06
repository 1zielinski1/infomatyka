// c19 - algorym liczb pierwszych.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int lp, p, n, d;
    bool tf;
    cout << "ile chcesz wyswietlic liczb pierwszych: ";
    cin >> n;
    lp = 0;
    p = 2;
    while (lp < n) {
        tf = true;
        for (d = 2; d < p; d++)
            if (p % d == 0)
            {
                tf = false;
                break;
            }
        if (tf)
        {
            cout << p << " ";
            lp++;
        }
        p++;
    }
    cout << endl;
    return 0;
}
