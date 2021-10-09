
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countone(int n)
{
    int c=0;
    while(n>0)
    {

    n=(n & n-1);
        c++;
    }
    return c;
}
int main()
{
    cout<<countone(5);
    return 0;
}
