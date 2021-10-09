#include<iostream>
using namespace std;

int main()
{
    int n,j,i;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    const int N=1e3;
    int idx[N];
    for(i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(idx[arr[i]]!=-1)
        {
            minidx=min(minidx,idx[arr[i]]);
        }
        else
            idx[arr[i]]=i;
    }
    if(minidx==INT_MAX)
    {
        cout<<"-1";
    }
    else
        cout<<minidx+1<<" ";

    return 0;
}
