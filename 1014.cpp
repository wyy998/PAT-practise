/* Created in 2017-6-10
 * Auther:wyy998
 * Athough answer is right but can't pass the online-test,i still wondering why...
 */
#include <iostream>
using namespace std;

int main()
{
	char str1[120];
	char str2[60];
	char str3[120];
	char str4[60];
	int i = 0, j = 0;
	int order = 0;

	cin >> str1;
	cin >> str2;
	cin >> str3;
	cin >> str4;

	while (str1[i])i++;
	while (str2[j])
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	i = 0, j = 0;
	while (str1[i])
	{
		if (str1[i] >= 'A'&&str1[i] <= 'Z'&& order==0)
		{
			for (j = 0; j < i; j++)
			{
				if (str1[i] == str1[j])
				{
					switch (str1[i]-'A')
					{
					case 0:cout << "MON "; break;
					case 1:cout << "TUE "; break;
					case 2:cout << "WED "; break;
					case 3:cout << "THU "; break;
					case 4:cout << "FRI "; break;
					case 5:cout << "SAT "; break;
					case 6:cout << "SUN "; break;
					}
					order = 1;
				}
			}
		}		
		i++;
		if (((str1[i] >= '0'&&str1[i] <= '9') || (str1[i] >= 'A'&&str1[i] <= 'N'))&& order==1)
		{
			for (j = 0; j < i; j++)
			{
				if (str1[i] == str1[j])
				{
					switch (str1[i])
					{
					case '0':cout << "00:"; break;
					case '1':cout << "01:"; break;
					case '2':cout << "02:"; break;
					case '3':cout << "03:"; break;
					case '4':cout << "04:"; break;
					case '5':cout << "05:"; break;
					case '6':cout << "06:"; break;	
					case '7':cout << "07:"; break;
					case '8':cout << "08:"; break;
					case '9':cout << "09:"; break;
					case 'A':cout << "10:"; break;
					case 'B':cout << "11:"; break;
					case 'C':cout << "12:"; break;
					case 'D':cout << "13:"; break;
					case 'E':cout << "14:"; break;
					case 'F':cout << "15:"; break;
					case 'G':cout << "16:"; break;
					case 'H':cout << "17:"; break;
					case 'I':cout << "18:"; break;
					case 'J':cout << "19:"; break;
					case 'K':cout << "20:"; break;
					case 'L':cout << "21:"; break;
					case 'M':cout << "22:"; break;
					case 'N':cout << "23:"; break;
					}
					order = 2;
				}
			}
		}
		if (order == 2)
			break;
	}

	i = 0, j = 0;
	while (str3[i])i++;
	while (str4[j])
	{
		str3[i] = str4[j];
		i++;
		j++;
	}
	i = 0, j = 0;
	while (str3[i])
	{
		for (j = 0; j < i; j++)
		{
			if ((str3[i] >= 'a'&&str3[i] <= 'z') || (str3[i] >= 'A'&&str3[i] <= 'Z'))
			{
				if (str3[j] == str3[i])
				{
					cout.fill('0');
					cout.width(2);
					cout << i;
					order = 1;
				}
			}
		}
		i++;
		if (order == 1)
			break;
	}
	system("pause");
	return 0;
}