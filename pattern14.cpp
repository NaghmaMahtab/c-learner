/*   *        *
  *   *    *   *
 *      *        *   */



#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=n;y++)
        {
            if(((x+y)%4==0)||(x==2)&&(y%4==0))
                cout<<"*";
            else
                cout<<" ";
        }
       cout<<endl;
    }
    return 0;
}
