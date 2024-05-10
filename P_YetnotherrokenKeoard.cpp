#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<ll> small,capital;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B') capital.push(i);
            if(s[i]>='a' && s[i]<='z' && s[i]!='b') small.push(i);
            if(s[i]=='B' && !capital.empty())
            {
                s[capital.top()]='0';
                capital.pop();
            }
            if(s[i]=='b' && !small.empty())
            {
                s[small.top()]='0';
                small.pop();
            }
        }
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]!='B'&& s[i]!='b' && s[i]!='0')
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}