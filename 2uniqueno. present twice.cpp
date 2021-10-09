#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int pos)
{
    return((n&(1<<pos))!=0);
}
void twice(int n,int arr[])
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];

    }
    int tempxor=xorsum;
    int setbit=0,pos=0;
    while(setbit!=1)
    {
        setbit=xorsum&1;
        pos++;
        xorsum=xorsum>>1;
        }
        int newxor=0;
        for(int i=0;i<n;i++)
        {
            if(getbit(arr[i],pos-1))
              {
                  newxor=newxor^arr[i];
        }
        }
         tempxor=tempxor^newxor;
        cout<<newxor<<" "<<tempxor;
}
int main()
{
    int arr[]={2,4,6,7,4,5,6,2};
    twice(8,arr);
    return 0;
}
