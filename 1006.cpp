/*Created in 2017-5-1 16:51
 */

#include<iostream>
using namespace std;

int main()
{
	int num,b=0,s=0,g=0;
	cin>>num;
	g=num%10;
	s=(num/10)%10;
	b=num/100;
	while(b--)
		cout<<"B";
	while(s--)
		cout<<"S";
	int i=1;
	while(g--)
		cout<<i++;

	return 0;
}
