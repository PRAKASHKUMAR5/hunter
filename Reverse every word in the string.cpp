#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string:"<<endl;
    getline(cin,str);
    int c=0,n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
         for(int j=i-1;j>=c;j--)
         {
             cout<<str[j];
         }
         cout<<" ";
         c=i+1;
        }
        if(i==n-1)
        {
        for(int j=n;j>=c;j--)
        {
            cout<<str[j];
        }
        }
    }
    return 0;
}
