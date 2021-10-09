#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
for(int i=2;i<=n;i++)
{
    f=f*i;
}
return(f);
}

int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            int ans=fact(i)/(fact(j)*fact(i-j));
    cout<<ans<<" ";
        }
        cout<<endl;
    }

    return 0;
}
