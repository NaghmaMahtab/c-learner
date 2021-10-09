#include<iostream>
using namespace std;
int binary(int n,int arr[],int key)
{
    int e=n,s=0;
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
            return mid;
        else if(arr[mid>key])
            e=mid-1;
        else
            s=mid+1;
    }
    return -1;

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
    int key;
    cout<<"key"<<endl;
    cin>>key;
   cout<<binary(n,arr,key);
    return 0;
}
