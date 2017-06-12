#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int num[1000];
    int i;
    for(i=0;i<N;i++)
    {
        cin>>num[i];
    }

    int a1=0,a2=0,a3=0,a4=0,a5=0;
    float a4_avr=0;
    bool flip=1;
    for(i=0;i<N;i++)
    {
        switch (num[i]%5)
        {
            case 0:
                if(num[i]%2==0)
                    a1+=num[i];
                break;
            case 1:
                if(flip)
                 a2+=num[i];
                else
                 a2-=num[i];
                flip=!flip;
                break;
            case 2:
                a3++;
                break;
            case 3:
                a4++;
                a4_avr+=num[i];
                break;
            case 4:
                a5=(a5>num[i])?a5:num[i];
                break;
            //default:break;
        }
    }
    if(a4)
    {
        a4_avr=a4_avr/a4;
    }
    if(a1==0)
        cout<<'N'<<' ';
    else cout<<a1<<' ';
    if(a2==0)
        cout<<'N'<<' ';
    else cout<<a2<<' ';
    if(a3==0)
        cout<<'N'<<' ';
    else cout<<a3<<' ';
    //cout<<a4_avr;
    if(a4_avr==0)
        cout<<'N'<<' ';
    else 
    {
        cout.precision(1);
        cout.setf(ios_base::fixed);
        cout.setf(ios_base::showpoint);
        cout<<a4_avr<<' ';
    }
    if(a5==0)
        cout<<'N';
    else cout<<a5;

    return 0;
}