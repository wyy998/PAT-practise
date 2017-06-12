#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n, pos_p, pos_t, count_p, count_a, count_t;
	char str[110];
	cin >> n;
	while (n--)
	{
		pos_p = pos_t = count_p = count_a = count_t = 0;
		cin >> str;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == 'P') {
				count_p++;
				pos_p = i;
			}
			else if (str[i] == 'A') {
				count_a++;
			}
			else if (str[i] == 'T') {
				count_t++;
				pos_t = i;
			}
		}

		if (count_p + count_a + count_t < strlen(str) || count_p>1 || count_t > 1 || pos_p*(pos_t - pos_p - 1) != strlen(str) - pos_t - 1 || pos_t - pos_p <= 1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}