#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void input_number(int *K) {
	setlocale(0, "rus");
	int number;
	while (true)
	{
		cout << "Input length of strings" << endl;
		cin >> number;
		if (cin.good())
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cout << "Invalid input data" << endl;
		cin.ignore(10, '\n');
	}
}

void screen(string words[], int count[], int i)
{
	int lenghts;
	cout << '\n';
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
	cout << "Input yours strings";
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
	cout << "Strings";
	cout << '\n';
	for (int g = 1; g < i; g++)
	{
		cout << words[g];
		cout << '\n';
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
	cin >> upper;
	cout << '\n';
	for (int o = 1; o < i; o++)
	{
		if (words[o].size() < upper)
		{
			cout << '\n';
			cout << words[o];
		}
		else {
			for (int p = 0; p < upper + 1; p++)
			{
				cout << words[o][p];
			}
			cout << '\n';

		}

	}
}
