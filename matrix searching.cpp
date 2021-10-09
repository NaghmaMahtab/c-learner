#include<iostream>
using namespace std;
int main()
{
     int n,m,i,j;
    cin>>n>>m;

    int m1[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>m1[i][j];
        }
    }
    int target;
    cout<<"target";
    cin>>target;
    bool found=false;
    int r=0,c=m-1;
    while(r<n&&c>=0)
    {
        if(m1[r][c]==target)
        {
        found=true;
        }


    if(m1[r][c]>target)
    {
        c--;
    }
    else
    {
        r++;
    }
     }
        if(found)
        {
            cout<<"element found";

        }
        else
         {

         cout<<"not found";
   }
    return 0;
}
