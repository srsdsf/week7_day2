#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=1e9;
        int i='a';
        while(i<='z')
        {
            int replace=0;
            int l=0;
            int r=n-1;
            while(l<=r)
            {
                if(s[l]!=s[r])
                {
                    if(s[l]==i)
                    {
                        l++;
                        replace++;
                    }
                    else if(s[r]==i)
                    {
                        r--;
                        replace++;
                    }
                    else
                    {
                        replace=1e9;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans=min(ans,replace);
            i++;
        }
        if(ans!=1e9)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}