#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int current=0,maxsum=0,st=0,maxst=0;
    while(i<n)
    {
        if(arr[i]==' '||arr[i]=='\0')
        {
            if(current>maxsum)
            {
                maxsum=current;
                maxst=st;
            }
            current=0;
            st=i+1;
        }
        else
            current++;
            if(arr[i]=='\0')
                break;
        i++;
    }
    cout<<maxsum<<endl;
    for(i=0;i<maxsum;i++)
cout<<arr[i+maxst]<<endl;
    return 0;
}
