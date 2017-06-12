#include<iostream>
#include<string>
using namespace std;

struct student
{
	int score;
	string name;
	string id;
};

int main()
{
	int n,i=1;
	student max, min, tmp;
	cin >> n;
	while (n--)
	{
		cin >> tmp.name;
		cin >> tmp.id;
		cin >> tmp.score;
		if (i == 1)
		{
			max.name = tmp.name;
			max.score = tmp.score;
			max.id = tmp.id;
			min.name = tmp.name;
			min.score = tmp.score;
			min.id = tmp.id;
			i--;
		}
		if (tmp.score > max.score)
		{
			max.name = tmp.name;
			max.score = tmp.score;
			max.id = tmp.id;
		}
		if (tmp.score < min.score)
		{
			max.name = tmp.name;
			max.score = tmp.score;
			max.id = tmp.id;
		}
	}
	cout << max.name << " " << max.id << endl;
	cout << min.name << " " << min.id << endl;
	system("pause");

	return 0;
}