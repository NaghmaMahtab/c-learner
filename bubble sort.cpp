#include<iostream>
using namespace std;
int main()
{
    int i,j,n,temp,c=1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(c<n)
    {
    for(i=0;i<n-c;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
    }
    c++;
}
for(i=0;i<n;i++)
    cout<<arr[i];
return 0;
}

