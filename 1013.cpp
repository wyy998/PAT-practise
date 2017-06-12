/* Created in 2017-6-10 00:36
 * Auther:wyy998
 */
#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int i = 0, j = 0, k = 0;
	cin >> m >> n;
	while (i < m)			//i为素数计数器
	{
		k++;
		j = 2;
		while (j < k)
		{
			if (!(k%j))		//如果k除以2~k-1余数存在0，那么k不是素数
				break;
			j++;
		}
		if (k == j)			//k为素数
			i++;			//素数计数器加一
	}//循环结束时，k为第m个素数
	int line = 1;
	cout << k;
	while (i < n)
	{
		k++;
		j = 2;
		while (j < k)
		{
			if (!(k%j))
			{
				break;
			}
			j++;
		}
		if (j == k)
		{
			i++;
			if (line > 1)
			{
				cout << " ";
			}
			cout << k;
			if (line = 10)
			{
				cout << endl;
				line = 0;
			}	
			line++;
		}
	}
	//system("pause");
	return 0;
}