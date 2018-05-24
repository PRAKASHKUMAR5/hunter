#include<iostream>
using namespace std;
int main()
{
    string str;
    int a=0;
    getline(cin,str);
    int l=str.length();
    for(int i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
            for(int j=i-1;j>=a;j--)
            {
                cout<<str[j];
            }
            a=i+1;
            cout<<" ";
        }
        if(i==l-1)
        {
            for(int j=i;j>=a;j--)
            {
                cout<<str[j];
            }
        }
      
    }
    
    return 0;
}
