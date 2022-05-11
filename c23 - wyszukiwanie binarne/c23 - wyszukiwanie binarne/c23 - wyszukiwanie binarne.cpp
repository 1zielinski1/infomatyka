// c23 - wyszukiwanie binarne.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
using namespace std;


int main()
{
	int l, p, sr, szukana;
	char tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

	cout << "podaj liczbe ktora chcesz znalezc: ";
	cin >> szukana;
	
	l = 0;
	p = 15;
	sr = (l + p) / 2;
	while (l <= p) {
		if (tab[sr] == szukana)
		{
			cout<< sr;
		}
		if (tab[sr] > szukana)
		{
			p = sr - 1;
		}
		else
		{
			l = sr + 1;
		}
		sr = (l + p) / 2;
	}
	cout << "liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie: "<<sr;
}
