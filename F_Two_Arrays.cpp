#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solution()
{
        int n;
        cin>>n;
        int a[n+3];
        
        for(int i=0; i<n;i ++)
        {
            cin>>a[i];
        }

        int b[n+3];
        for(int i=0; i<n;i ++)
        {
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+n);
        int ans=0;
        int i=n-1;
        while(i>=0)
        {
            if(a[i]> b[i] || b[i]-a[i]> 1)
            {
                ans=1;
                break;
            }
            i--;
        }
        if(ans==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}