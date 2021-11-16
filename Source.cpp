#include <iostream>
#include <ctime>
#include <string>
#include <windows.h>
using namespace std;

void input_number(int *K) {
	int number;
	while (true)
	{
		cin >> number;
		if (cin.good())
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cout << "Invalid input data, try something else" << endl;
		cin.ignore(10, '\n');
	}
	*K = number;
}

void screen(string words[], int count[], int i)
{
	int lenghts;
	cout << "\nInput length of strings" << endl;
	input_number(&lenghts);
	int prover = 1;
	for (int j = 1; j < i; j++)
	{
		if (count[j] == lenghts)
		{
			cout << '\n';
			cout << words[j];
			cout << '\n';
			prover++;
		}
	}
}

int main()
{
	string vvod;
	string stroki;
	string* words = new string[1000];
	int i = 1;
	cout << "Input some strings";
	while (vvod != "stop")
	{
		cout << '\n';
		cin >> vvod;
		cout << '\n';
		stroki = stroki + vvod;
		if (stroki == " ")
		{
			stroki = stroki + vvod;
		}
		if (vvod == "stop")
		{
			cout << '\n';
			break;
		}
		words[i] = stroki;
		i++;
		stroki = " ";
	}
	int* count = new int[i];
	count[1] = words[1].size();
	for (int j = 2; j < i; j++)
	{
		if (i >= 2)
		{
			count[j] = words[j].size() - 1;
		}
	}
	system("cls");
	cout << "Strings";
	cout << '\n';
	for (int g = 1; g < i; g++)
	{
		cout << '\n';
		cout << words[g];
	}
	cout << '\n';
	cout << "Vallue char in strings ";
	cout << '\n';
	for (int g = 1; g < i; g++)
	{
		cout << count[g] << '\t';
	}
	screen(words, count, i);
	cout << '\n';
	cout << "Input size of outputting strings";
	cout << '\n';
	int upper;
	input_number(&upper); //Длина выводимой строки
	cout << '\n';
	for (int o = 1; o < i; o++)
	{
		if (words[o].size() < upper)
		{
			cout << words[o];
			cout << '\n';
		}
		else {
			if (o == 1) {
				for (int p = 0; p < upper; p++)
				{
					cout << words[o][p];
				}
				cout << '\n';
			}
			else{
				for (int p = 1; p < upper + 1; p++)
				{
					cout << words[o][p];
				}
				cout << '\n';
			}
		}
	}
	return 666;
}
