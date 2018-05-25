#include<iostream>
using namespace std;
int main()
{
    int a,c,count=1,x;
    cin>>a;
    string str=to_string(a);
    int l=str.length();
    char b;
    for(int i=0;i<l-1;i+=1)
    {
        if(str[i]=='0')
        {
            count--;
        }
        c=0;
        x=str[i];
        x-=48;
        x*=10;
        b=x+str[i+1];
        c=b-48;
        cout<<"c="<<c<<endl;
        if(c<=26 && c>0)
            {
                count++;
            }
     }
     cout<<count;
   
}
