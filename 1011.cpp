/* Created in 2017-6-3
 * Anther:wyy998
 */
#include <iostream>
using namespace std;

int main()
{
    int n;
    bool value[10]={0};
    double A,B,C;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A>>B>>C;
        if(A+B>C)
        {
            value[i]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"Case #"<<i<<": ";
        if(value[i-1]==1)
        {
            cout<<"true";
        }
        else
        {
            cout<<"false";
        }
        cout<<endl;
    }

    return 0;
}