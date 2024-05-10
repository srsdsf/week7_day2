#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        ll querry;
        vector<ll> v1;
        for(ll i=0; i<q; i++)
        {
            cin>>querry;
            if(v1.empty() || v1.back()>querry)
            {
                v1.push_back(querry);
            }
            
        }
        for(ll i=0; i<n;i ++)
        {
            for(auto res: v1)
            {
                if(v[i]%(1<<res)==0)  //a[i]/2m==0
                {
                    res=res-1;
                    v[i]+=(1<<res);  //question ar poriprekhite ayta set korte hoba
                }
            }
        }
        for(auto res: v)
        {
            cout<<res<<" ";
        }
        cout<<endl;
    }
}