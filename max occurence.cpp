#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="abjiiioppopppppp";
    int i;
    int freq[26];
    for(i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    int maxf=0;
    char ans='a';
    for(i=0;i<26;i++)
    {
        if(freq[i]>maxf)
        {
            maxf=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxf<<" "<<ans;
    return 0;
}
