/*Created in 2017-5-21 14:44 UTC+8
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i=0,j=0;
    getline(cin,str);//使用getline读取一行带空格的字符串
	int space[81] = { 0 };//储存空格位置
    while(str[i]!='\0')
    {
		if (str[i] == ' ')
		{
			//if (str[i++] == ' ')
				//return 0;
			space[j++] = i; //记录空格位置
		}
		i++;
    }
	j--;  //去除额外加的一
	while (j >= -1)
	{
		if (j == -1)//无空格时
		{
			i = 0;
			j--;
		}
		else		//有空格时移动到最后一个空格+1处
			i = space[j--] + 1;

		while (str[i] != '\0'&&str[i] != ' ')//输出最后一个单词
		{
			cout << str[i];
			i++;
		}
		if (j > -2)//若后面还有单词则加空格
			cout << ' ';
	}
	system("pause");
    return 0;
}