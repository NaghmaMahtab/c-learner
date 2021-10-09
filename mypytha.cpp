#include<iostream>
using namespace std;
void pytha(int,int,int);
int main()
{
int a,b,c;
cin>>a>>b>>c;
pytha(a,b,c);
return 0;
}
void pytha(int a,int b,int c)
{


int  max=a;

if(b>max)
{
max=b;
}
if(c>max)
{
max=c;
}
if(max==a)
{
if(a*a==b*b+c*c)
{
cout<<"true";
}
else
{
cout<<"false";
}
}
else if(max==b)
{
    if(b*b==a*a+c*c)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
else
{
    if(c*c==a*a+b*b)
{
    cout<<"true";
}
else
{
    cout<<"false";
}
}
}
