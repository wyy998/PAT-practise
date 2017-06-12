/*Created in 2017-5-7 20:13
 */
#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cin>>n;
	cin>>m;
	m=n-m;
	int a[n];
	int i,j,tmp;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n-1;j++)
		{
			tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
		}
	}
	for(i=0;i<n-1;i++)
		cout<<a[i]<<' ';
	cout<<a[n-1];


	return 0;
}
