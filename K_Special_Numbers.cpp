#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll power(ll base,ll n)
{
    ll res=1;
    while(n)
    {
        if(n%2==1)
        {
            res=res*base%mod;
            n--;
        }
        else
        {
            base=base*base%mod;
            n/=2;
        }
    }
    return res;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        while(k)
        {
            if(k%2==0) s+='0';
            else s+='1';
            k/=2;
        }
        ll ans=0;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='1') ans+=power(n,i);
            ans%=mod;
        }
        cout<<ans<<endl;
    }
}