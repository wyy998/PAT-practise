/*
The answer of PAT practice 1005 primary level
Last Modified in 2017-4-15 8:45
created by wyy998(copy from blog)
*/

#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	int a[102][5000];
	int i, j, k, n, t;
	int flag = 0;
	for (i = 0; i<102; i++)		//clear all array
		for (j = 0; j<5000; j++)
			a[i][j] = 0;
	cin >> k;					//times of numbers into k
	for (i = 0; i<k; i++)		//每次读取一个数n，将a[n][1]置1，运算过程中每一个中间数t，将a[n][t]置1（顺便完成了n的排序）
	{
		cin >> n;				//every number into n
		t = n;					//temp, save the mid numbers
		a[n][1] = 1;
		while (t != 1)			//caculate
		{
			a[n][t] = 1;
			if (t % 2 == 1)
				t = (t * 3 + 1) / 2;
			else
				t = t / 2;
		}
	}
	for (i = 1; i<5000; i++)	//寻找关键数
	{
		for (j = 1; j <= 100; j++)//统计中间数i出现的次数
			a[101][i] = a[101][i] + a[j][i];
		if (a[101][i] == 1)		//原数（中间数）i数量为1，找到该中间数在数组中的位置，令其行第一项为零
			for (j = 1; j <= 100; j++)
				if (a[j][i] == 1)
					a[j][0] = 1;

	}
	for (i = 100; i >= 1; i--)	//从大到小输出
		if (a[i][0] == 1)
			if (flag)
				cout << ' ' << i;
			else
			{
				flag = 1;
				cout << i;
			}
	cout << endl;
	return 0;
}