#include<iostream>
using namespace std;
int main()
{
    string str,str1;
    cin>>str>>str1;
    int n1=str.length(),n2=str1.length(),c=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(str[i]==str1[j])
            {
                c++;
            }
        }
    }
    if(c==n2)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
