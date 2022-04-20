// c21 - szyfr cezara.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
using namespace std;


void fun(char tab[],int klucz)
{
	int dl = strlen(tab);
	if (!(klucz >= -26 && klucz <= 26))
	{
		return;
	}
	if (klucz >= 0)
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz <= 'z')
			{
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i] + klucz - 26;
			}
		}
	}
		else 
		{
			for (int i = 0; i < dl; i++)
			{
				if (tab[i] + klucz >= 'a')
				{
					tab[i] += klucz;
				}
				else
				{
					tab[i] = tab[i] + klucz + 26;
				}
			}
		}
}

int main()
{
	int klucz;
	char tab[100];
	cout << "podaj wyraz skladajacy sie z malych liter : ";
	cin >> tab;
	cout << "Podaj klucz z przedzialu [-26...26]: ";
	cin >> klucz;
	fun(tab, klucz);
	cout << "Po zaszyfrowaniu: " << tab << endl;
	fun(tab, -klucz);
	cout << "Po rozszyfrowaniu: " << tab << endl;
}
