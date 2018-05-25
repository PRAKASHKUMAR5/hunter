#include<iostream>
using namespace std;
int main()
{
    int n,c=0,c1=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
      c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
            }
        }
        if(c==1)
        {
            c1++;
            if(c1==2)
            {
           cout<<arr[i];
            }
        }
    }
    }
