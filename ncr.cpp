#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
}
int fact(int n)
{
    int f=1;
for(;n>0;n--)
{
    f=f*n;
}
return(f);
}
