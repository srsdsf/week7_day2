#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll inversion_cnt(vector<ll> a,int n)
{
    ll cnt=0,one=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            one++;
        }
        else
        {
            cnt+=one;
        }
    }
    return cnt;//3 upay a inversion cnt ta check korbo
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll ans=inversion_cnt(a,n);  //kono change na kore inversion 1 ber count korlam
        ll id=-1;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                a[i]=1;
                id=i;  //kototomo indx a paici id te rekhe break korbo
                break;
            }
        }

        ans=max(ans,inversion_cnt(a,n));
        if(id!=-1)
        {
            a[id]=0;  //-1 na hole okhane 0 cilo sei 0 take 0 oi kore dilam
        }
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]==1)
            {
                a[i]=0;
                break;
            }
        }
        ans=max(ans,inversion_cnt(a,n));
        cout<<ans<<endl;
    }
}