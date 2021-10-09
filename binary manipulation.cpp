#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int getbit(int n,int pos)
{
    return(n&(1<<pos)!=0);

}
int main()
{
    cout<<getbit(5,2);
    return 0;
}
*/
/*int setbit(int n,int pos)
{
    return (n|(1<<pos));
}
int main()
{

cout<<setbit(5,1);
return 0;
}*/
/*int clearbit(int n,int pos)
{
    int mask=~(1<<pos);
    return(n&mask);
}
int main()
{
    cout<<clearbit(5,1);
    return 0;
}*/
int updatebit(int n,int pos,int value)
{
    int mask=~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}
int main()
{
    cout<<updatebit(5,1,1);
    return 0;
}
