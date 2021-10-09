/*
*****
****
***
**
*




#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the value of n";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/#include<iostream>
using namespace std;
int main()
{
    int  x,y;
    for(x=5;x>=1;x--)
    {
        for(y=1;y<=x;y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
