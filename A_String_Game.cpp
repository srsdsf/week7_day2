#include<bits/stdc++.h>
using namespace std;
bool paired(int n,string s)
{
    int a=0,b=0;
    int i=0;
    while(i<n)
    {
        if(s[i]=='0')
        {
            a++;
        }
        else 
        {
            b++;
        }
        i++;
    }
    int Minimum=min(a,b);
    return Minimum%2==0;
}
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
        if(paired(n,s))
        {
            cout<<"Ramos"<<endl;
        }
        else
        {
            cout<<"Zlatan"<<endl;
        }
    }
}