
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="3456";
    sort(s.begin(),s.end(),greater<char>());
    cout<<s;
}
