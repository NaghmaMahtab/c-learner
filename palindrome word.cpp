#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,i;
    char a[n+1];
    cin>>a;
    bool check=1;
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            check=0;
            break;
       }

    }
    if(check==true)
        cout<<"palindrome";
    else
        cout<<"not plindrome";

    return 0;
}
