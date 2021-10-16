#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;

    int seq=0,max_temp=0,max_final=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>=max_temp)
        {
            seq++;
            max_temp=a;
            max_final=seq;

        }

            if(seq>max_final){
                max_final=seq;
            }

            seq=1;
            max_temp=a;

    }
        cout<<max_final<<endl;
}
