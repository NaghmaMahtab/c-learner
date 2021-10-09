#include<iostream>
using namespace std;
string keypadarr[]={" "," ","abc","def","ghi"};
void mobile(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadarr[ch-'0'];
    string ros=s.substr(1);
    for(int i=0;i<code.length();i++)
    {
        mobile(ros,ans+code[i]);
}
}
int main()
{
    mobile("23"," ");
    return 0;
}
