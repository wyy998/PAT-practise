#include<iostream>
#include<string>
using namespace std;

int pinyin(int n)
{
	if (n > 9)
	{
		pinyin(n/ 10);
		n = n % 10;
		cout << " ";
	}
	switch (n)
	{
	case 0:cout << "ling"; break;
	case 1:cout << "yi"; break;
	case 2:cout << "er"; break;
	case 3:cout << "san"; break;
	case 4:cout << "si"; break;
	case 5:cout << "wu"; break;
	case 6:cout << "liu"; break;
	case 7:cout << "qi"; break;
	case 8:cout << "ba"; break;
	case 9:cout << "jiu"; break;
	default:return 1;
	}
}

int main()
{
	string input;
	cin >> input;
	unsigned int sum = 0;
	for (unsigned int i = 0; i < input.length(); i++)
	{
		sum += (unsigned int)input[i] - 48;
	}
	pinyin(sum);
	system("pause");
}