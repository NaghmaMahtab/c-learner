#include<iostream>
using namespace std;
void fib(int);
int main()
{
    int n;
    cout<<"enter the numbers";
    cin>>n;
    fib(n);
return 0;
}
void fib(int n)
{
    int a=0,b=1,c,i;
    for(i=1;i<=n;i++)
    {
        cout<<a;
        c=a+b;
        a=b;
        b=c;
    }

}
