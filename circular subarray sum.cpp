#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n)
{
int currentsum=0;int maxsum=INT_MIN;
    for(int i=0;i<n;i++)

       {
           currentsum=currentsum+arr[i];

    if(currentsum<0){
        currentsum=0;
    }

    maxsum=max(maxsum,currentsum);
}
return maxsum;
}

int main()
{

    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int wrapsum,nonwrapsum;
    int mx=-1;
    nonwrapsum=kadane(arr,n);
    int total=0;
    for(i=0;i<n;i++)
    {
        total=total+arr[i];
        arr[i]=-arr[i];
        wrapsum=total+kadane(arr,n);
    }

    cout<<max(wrapsum,nonwrapsum);;
    return 0;
}
