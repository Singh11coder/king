#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    v[0]=v[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(v[i])
        {
            for(int j=2*i;j<=n;j+=i)
            {
                v[i]=0;
            }
        }
    }
    int t;
    cin>>t;
    if(v[t])
    {
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not Prime Number"<<endl;
    }
}