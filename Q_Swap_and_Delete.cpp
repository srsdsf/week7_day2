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
        ll zero=0,one=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0') zero++;
            else one++;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                if(zero>0) zero--;
                else break;
            }
            else
            {
                if(one>0) one--;
                else break;
            }
        }
        cout<<zero+one<<endl;
    }
}