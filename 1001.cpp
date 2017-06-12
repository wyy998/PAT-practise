#include<iostream>
using namespace std;

int main() 
{
	int t, k = 0;
	cin >> t;
	while (t != 1) 
	{
		if (t % 2 == 0)
			t = t / 2;
		else
			t = (3 * t + 1) / 2;
		k++;
	}
	cout << k;
	return 0;
}