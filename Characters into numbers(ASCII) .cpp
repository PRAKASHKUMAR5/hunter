#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int c=0,n=str.length();
    for(int i=0;i<n;i++)
    {
        c+=int(str[i]);
    }
    cout<<c;
}
