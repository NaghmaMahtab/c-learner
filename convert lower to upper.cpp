#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string s="naghma";
    /*int i;
    /*for(i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-=32;
        }
    }
    cout<<s<<endl;
     for(i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    cout<<s;*/
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
    return 0;
}
