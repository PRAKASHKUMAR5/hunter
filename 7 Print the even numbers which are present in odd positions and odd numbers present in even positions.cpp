#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i%2==0)
        {
            if(arr[i]%2!=0)
            {
                cout<<arr[i]<<" ";
            }
        }
        else
        {
           if(arr[i]%2==0)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
    
}
