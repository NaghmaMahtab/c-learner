#include<iostream>
using namespace std;
int main()
{
    int x,y,n;
    cout<<"enter the value of n";
    cin>>n;
    for(x=1;x<=n;x++)
    {
        for(y=1;y<=x;y++)
        {
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}
