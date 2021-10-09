
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int n)
{
    return((n&(n-1))==0);
}
int main()
{
    cout<<power(14);
    return 0;
}
