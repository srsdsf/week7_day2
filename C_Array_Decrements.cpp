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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<int> b(n);
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int dif=-1,zero_dif=-1;
        bool imp=false;
        for(int i=0; i<n; i++)
        {
            if(a[i] < b[i])
            {
                imp=true;
                break;
            }
            if(b[i]!=0)
            {
                if(dif==-1)
                {
                    dif=a[i]-b[i];
                }
                else
                {
                    if(a[i]-b[i]!=dif)
                    {
                        imp=true;
                        break;
                    }
                }
            }
            else
            {
                zero_dif=max(zero_dif,a[i]-b[i]);
            }
        }
        if(imp)
        {
            cout<<"NO"<<endl;
            continue;
        }
        (dif==-1 || zero_dif<=dif)? cout<<"YES"<<endl: cout<<"NO"<<endl;
    }
}