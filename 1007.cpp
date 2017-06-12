/*Created in 2017-5-1 20:30 UTC
 */

#include<iostream>
using namespace std;

int main()
{
	int num,n;
	int tmp=0,i,counter=0;
	cin>>num;
	for(n=1;n<=num;n++)
	{
		for(i=2;i<n;i++)
			if(n%i==0)
				i=n+1;
		if(n==1)
			tmp=n;
		else if(i==n && n!=1)
		{
			if((n-tmp)==2)
				counter++;
			tmp=n;
		}
	}
	cout<<counter;

	return 0;
}
