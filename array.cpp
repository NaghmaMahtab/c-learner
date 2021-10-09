#include<iostream>
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
    cout<<"the displayed array are"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
