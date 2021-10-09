#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        m=max(m,arr[i]);
    }
    cout<<m;
    return 0;
}
