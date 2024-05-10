#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string ans="";
        bool flag=false;
        vector<int> a(n),taken;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(taken.empty())
            {
                ans.push_back('1');
                taken.push_back(a[i]);
            }
            else
            {
                if(flag)
                {
                    if(a[i]<taken.back())
                    {
                        ans.push_back('0');
                    }
                    else
                    {
                        if(a[i]>taken[0])
                        {
                            ans.push_back('0');
                        }
                        else
                        {
                            ans.push_back('1');
                            taken.push_back(a[i]);
                        }
                    }
                   
                }
                else
                {
                    if(a[i]>=taken.back())
                    {
                        ans.push_back('1');
                        taken.push_back(a[i]);
                    }
                    else
                    {
                        if(a[i]>taken[0])
                        {
                            ans.push_back('0');
                        }
                        else
                        {
                            flag=true;
                            ans.push_back('1');
                            taken.push_back(a[i]);
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}