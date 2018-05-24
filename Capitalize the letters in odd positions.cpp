#include<iostream>
using namespace std;
int main()
{
    string str,a;
    getline(cin,str);
    int l=str.length(),b=0;
    for(int i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
            b=0;
           cout<<" ";
        }
        if(b%2!=0)
        {
            cout<<str[i];
            b++;
        }
        else
        {
           a=str[i]-32;
           cout<<a;
           b++;
        }
    }
    return 0;
}
