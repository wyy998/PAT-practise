/*Created in 2017-5-21 14:44 UTC+8
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i=0,j=0;
    getline(cin,str);//ʹ��getline��ȡһ�д��ո���ַ���
	int space[81] = { 0 };//����ո�λ��
    while(str[i]!='\0')
    {
		if (str[i] == ' ')
		{
			//if (str[i++] == ' ')
				//return 0;
			space[j++] = i; //��¼�ո�λ��
		}
		i++;
    }
	j--;  //ȥ������ӵ�һ
	while (j >= -1)
	{
		if (j == -1)//�޿ո�ʱ
		{
			i = 0;
			j--;
		}
		else		//�пո�ʱ�ƶ������һ���ո�+1��
			i = space[j--] + 1;

		while (str[i] != '\0'&&str[i] != ' ')//������һ������
		{
			cout << str[i];
			i++;
		}
		if (j > -2)//�����滹�е�����ӿո�
			cout << ' ';
	}
	system("pause");
    return 0;
}