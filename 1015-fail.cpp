/* Created in 2017-6-18
 * Auther:wyy998
 * From:https://www.patest.cn/contests/pat-b-practise/1015
 */
#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    student(string x,int y,int z)
    {
        id=x;
        D=y;
        C=z;
        sum=D+C;
    }
    string id;
    int D,C,sum;
};  //save student data

void exchange(student *a,student *b)
{
    string i;
    int j,k,l;

    i=a->id;
    j=a->D;
    k=a->C;
    k=a->sum;

    a->id=b->id;
    a->D=b->D;
    a->C=b->C;
    a->sum=b->sum;

    b->id=i;
    b->D=j;
    b->C=k;
    b->sum=l;
}

int main()
{
    int N,L,H;
    cin>> N >> L >> H;
    //initial 4 list of 4 class student
    student *frist[N];
    student *second[N];
    student *third[N];
    student *last[N];
    //get data
    string tmp_id;
    int tmp_d,tmp_c;
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<N;i++)
    {
        //init origin database
        //save all student data into class student array
        cin>> tmp_id >> tmp_d >> tmp_c;
        if(tmp_d>=H && tmp_c>=H)
        {
            frist[a++]=new student(tmp_id,tmp_d,tmp_c);
        }
        else if (tmp_c>=L && tmp_d>=H)
        {
            second[b++]=new student(tmp_id,tmp_d,tmp_c);
        }
        else if(tmp_d>=L && tmp_c>=L && tmp_d>tmp_c)
        {
            third[c++]=new student(tmp_id,tmp_d,tmp_c);
        }
        else if(tmp_d>=L && tmp_c>=L)
        {
            last[d++]=new student(tmp_id,tmp_d,tmp_c);
        }
        //classify student into 4 group
    }

    for(int s=0;s<a-1;s++)
    {
        for(int i=0;i<a-1;i++)
        {
            if(frist[i]->sum < frist[i+1]->sum)
            {
                exchange(frist[i],frist[i+1]);
            }
        }
    }
    for(int s=0;s<b-1;s++)
    {
        for(int i=0;i<b-1;i++)
        {
            if(second[i]->sum < second[i+1]->sum)
            {
                exchange(second[i],second[i+1]);
            }
        }
    }
    for(int s=0;s<c-1;s++)
    {
        for(int i=0;i<c-1;i++)
        {
            if(third[i]->sum < third[i+1]->sum)
            {
                exchange(third[i],third[i+1]);
            }
        }
    }
    for(int s=0;s<d-1;s++)
    {
        for(int i=0;i<d-1;i++)
        {
            if(last[i]->sum < last[i+1]->sum)
            {
                exchange(last[i],last[i+1]);
            }
        }
    }

    cout<<a+b+c+d<<endl;
    for(int i=0;i<a;i++)
    {
        //out put frist student info
        cout<< frist[i]->id << ' ' << frist[i]->D << ' ' << frist[i]->C ;
        if(d)
            cout<<endl;
        delete frist[i];
    }
    for(int i=0;i<b;i++)
    {
        //out put second student info
        cout<< second[i]->id << ' ' << second[i]->D << ' ' << second[i]->C ;
        if(d)
            cout<<endl;
        delete second[i];
    }
    for(int i=0;i<c;i++)
    {
        //out put third student info
        cout<< third[i]->id << ' ' << third[i]->D << ' ' << third[i]->C ;
        if(d)
            cout<<endl;
        delete third[i];
    }
    for(int i=0;i<d;i++)
    {
        //out put last student info
        cout<< last[i]->id << ' ' << last[i]->D << ' ' << last[i]->C ;
        if(i<d-1)
            cout<<endl;
        delete last[i];
    }


    return 0;
}
