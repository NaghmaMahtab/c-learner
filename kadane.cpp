#include<iostream>
#include<climits>
using namespace std;
int main()
{

    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int currentsum=0,maxsum=INT_MIN;
    for(i=0;i<n;i++)

        currentsum=currentsum+arr[i];

    if(currentsum<0){
        currentsum=0;
    }

    maxsum=max(maxsum,currentsum);
    cout<<maxsum<<endl;
    return 0;
}
