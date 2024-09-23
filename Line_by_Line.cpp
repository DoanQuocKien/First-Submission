#include <bits/stdc++.h>

using namespace std;
long double a;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("X.OUT","w",stdout);
    int t;
    cin>>t;
    for(int x=1;x<=t;++x)
    {
        cin>>n>>a;
        a/=100;
        cout<<"Case #"<<x<<": ";
        cout<<setprecision(6)<<fixed<<(pow(pow(a,n-1),1.0/n)-a)*100;
        cout<<'\n';
    }
    return 0;
}
