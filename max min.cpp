#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(i=0;i<n;i++)
    {
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    cout<<maxno<<endl<<minno<<endl;
    return 0;
}
