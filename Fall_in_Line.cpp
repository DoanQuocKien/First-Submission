#include <bits/stdc++.h>

using namespace std;
const int maxn=1e6+5;
pair<long long,long long> a[maxn];
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int x,int y)
{
    return rng()%(y-x+1)+x;
}
int n,tmp;
int ans;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("X.INP","r",stdin);
    //freopen("X.OUT","w",stdout);
    int t;
    cin>>t;
    for(int x=1;x<=t;++x)
    {
        cin>>n;
        for(int i=1;i<=n;++i)
        {
            cin>>a[i].first>>a[i].second;
        }
        ans=2;
        if(n>=3)
        {
            for(int p=0;p<30;++p)
            {
                int tmpans=2;
                int i=rnd(1,n-1),j=rnd(i+1,n);
                for(int k=1;k<=n;++k)
                {
                    if(k==i||k==j) continue;
                    if((a[k].second-a[j].second)*(a[j].first-a[i].first)==(a[k].first-a[j].first)*(a[j].second-a[i].second)) ++tmpans;
                }
                ans=max(tmpans,ans);
            }

        }
        cout<<"Case #"<<x<<": "<<n-ans<<'\n';
    }
    return 0;
}
