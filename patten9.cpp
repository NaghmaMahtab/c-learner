#include<iostream>
using namespace std;
int main()
{
    int x,y,n;
    cin>>n;
    for(x=1;x<=n;x++)
    {
        for(y=1;y<=x;y++)
        {
            if((x+y)%2==0)
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}
