/*
    *
   **
  ***
 ****
*****
*/

#include<iostream>
using namespace std;
int main()
{
int x,y,sp;
/*cout<<"enter the value of x,y";
cin>>x>>y;*/
for(x=1;x<=5;x++)
{

for(sp=5;sp>x;sp--)
{
        cout<<" ";
}
    for(y=1;y<=x;y++)
    {
        cout<<"*";
    }
    cout<<endl;

}

return 0;
}
