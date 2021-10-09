#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int twice(int n,int arr[])
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int main()
{
    int arr[]={2,4,6,3,4,6,2};
    cout<<twice(7,arr);
    return 0;
}
