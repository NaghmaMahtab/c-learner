#include<iostream>
using namespace std;
string moveall( string s)
{
    if(s.length()==0)
    {
        return" ";
    }
    char ch=s[0];
    string ans=moveall(s.substr(1));

    if(ch=='x')
    {
        return ans+ch;
    }
    else
    {
        return ch+ans;
    }
}
int main()
{
    string s="axxxxbxxxx";
    cout<<moveall(s);
    return 0;
}
