#include<iostream>
using namespace std;
int main()
{
    int x,y,z,n;
    cout<<"nter the value of n";
    cin>>n;
    for(x=1;x<=n;x++)
    {
        for(y=1;y<=x;y++)
        {
            z++;
            cout<<z;
        }
        cout<<endl;
    }
    return 0;
}
