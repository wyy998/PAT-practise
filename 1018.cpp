/* Created in 2017-7-31 22:59
 * Auther:wyy998
 *
 */

#include <iostream>
#define a_win 1
#define b_win 2
#define equal 3
using namespace std;

int judge(char a,char b);

int main()
{
    int n;
    char a,b;
    int a_w[3]={0},a_l=0,eq=0,b_w[3]={0},b_l=0;
    cin>>n;

    //input data & analysis
    while(n--)
    {
        cin>>a>>b;
        if(judge(a,b)==a_win)       //a win
        {
            switch(a)
            {
                case 'B':a_w[0]++;break;
                case 'C':a_w[1]++;break;
                case 'J':a_w[2]++;break;
                default:break;
            }
            b_l++;
        }
        else if(judge(a,b)==b_win)
        {
            switch(b)
            {
                case 'B':b_w[0]++;break;
                case 'C':b_w[1]++;break;
                case 'J':b_w[2]++;break;
                default:break;
            }
            a_l++;
        }
        else
        {
            eq++;
        }
    }

    //output
    cout<<a_w[0]+a_w[1]+a_w[2]<<' '<<eq<<' '<<a_l<<endl;
    cout<<b_w[0]+b_w[1]+b_w[2]<<' '<<eq<<' '<<b_l<<endl;
    //a most win
    if(a_w[2]>a_w[1] && a_w[2]>a_w[0])
        cout<<'J'<<' ';
    else if(a_w[1]>a_w[0] && a_w[1]>=a_w[2])
        cout<<'C'<<' ';
    else
        cout<<'B'<<' ';
    //b most win
    if(b_w[2]>b_w[1] && b_w[2]>b_w[0])
        cout<<'J';
    else if(b_w[1]>b_w[0] && b_w[1]>=b_w[2])
        cout<<'C';
    else
        cout<<'B';
    
    return 0;
}

int judge(char a,char b)
{
    if(a=='B')
    {
        if(b=='B')
            return equal;
        else if(b=='C')
            return a_win;
        else 
            return b_win;
    }
    if(a=='C')
    {
        if(b=='B')
            return b_win;
        else if(b=='C')
            return equal;
        else 
            return a_win;
    }
    if(a=='J')
    {
        if(b=='B')
            return a_win;
        else if(b=='C')
            return b_win;
        else 
            return equal;
    }
}
