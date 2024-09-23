#include <bits/stdc++.h>

using namespace std;
const int maxn=3e5+4;
queue<int> nxt;
int a[maxn],b[maxn];
int n,k;
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
        cin>>n>>k;
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b+1,b+n+1);
        int p=upper_bound(b+1,b+n+1,k)-b;
        if(p==n+1) p=n;
        int p2=p-1;
        a[n+1]=1e9+7;
        b[n+1]=1e9+7;
        a[0]=-1e9+7;
        b[0]=-1e9+7;
        while(nxt.size()) nxt.pop();
        //cout<<p<<' ';
        for(int i=1;i<=n;++i)
        {
            if(a[i]>b[p])
            {
                if(nxt.size())
                {
                    nxt.pop();
                    nxt.push(i);
                }
                //cout<<"a[i] greater than b[p]\n";
            }
            else
            {
                nxt.push(i);
                //cout<<"a[i] smaller than b[p]\n";
            }
        }
        int choice2=n+1,choice1=nxt.front();
        nxt.pop();
        if(nxt.size()) choice2=nxt.front();
        //cout<<choice2<<' '<<choice1<<'\n';
        cout<<"Case #"<<x<<": ";
        if(abs(b[p]-k)<abs(b[p2]-k)) cout<<choice1<<' '<<abs(b[p]-k);
        else if(abs(b[p]-k)>abs(b[p2]-k)) cout<<choice2<<' '<<abs(b[p2]-k);
        else
        {
            if(choice1<choice2) cout<<choice1<<' '<<abs(b[p]-k);
            else cout<<choice2<<' '<<abs(b[p2]-k);
        }
        cout<<'\n';
    }
    return 0;
}
