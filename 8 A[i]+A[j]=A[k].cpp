#include<iostream>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
       for(int j=1;j<n;j++)
        {
            a=0;
            a=arr[i]+arr[j];
            for(int x=2;x<n;x++)
            {
                if(a==arr[x]  && i<j)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[x]<<endl;
                }
            }
        }
    }
    return 0;
    
}
