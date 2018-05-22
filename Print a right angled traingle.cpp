#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<=a*2;i++)
    {
       if(i%2!=0)
       {
        for(int j=0;j<i;j++)
        {
            cout<<"1";
        }
        
        cout<<endl;
        }
        }
    return 0;
}
