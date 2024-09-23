#include <iostream>

using namespace std;
int n;
long long a,k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("X.OUT","w",stdout);
    int t;
    cin>>t;
    for(int x=1;x<=t;++x)
    {
        cin>>n>>k;
        long long minn=1e9+5;
        for(int i=1;i<=n;++i)
        {
            cin>>a;
            minn=min(a,minn);
        }
        if(n>1) minn*=((n-1)*2-1);
        cout<<"Case #"<<x<<": ";
        if(minn>k) cout<<"NO";
        else cout<<"YES";
        cout<<'\n';
    }
    return 0;
}
