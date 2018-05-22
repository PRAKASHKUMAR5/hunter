#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
     for(int i=0;i<n;i++)
   {
           s+=mat[i][i];
        }
        cout<<s;
    return 0;
}
