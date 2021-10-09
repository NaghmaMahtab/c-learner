#include<iostream>
#include<climits>
using namespace std;
bool pairsum(int arr[],int n,int k)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high;
            return true;
        }
        else if(arr[low]+arr[high]>k)
            {
                high--;
            }
            else
                low++;
    }
    return false;
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
    int k;
    cout<<"k";
    cin>>k;
    cout<<pairsum(arr,n,k);
    return 0;
}
