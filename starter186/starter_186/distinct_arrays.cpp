#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define un unsigned long long
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"

const ll M = 998244353;



void usool()
{
   ll n; cin>>n;
   vector<ll> v(n);
   for(ll i=0;i<n;i++) cin>>v[i];
   
   sort(all(v));
   
   ll ans= v[0] ;
   for(ll i=1;i<n;i++){
       ans = (ans * (v[i]-i))%M;
   }
   cout<<ans<<endl;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        usool();
    }
    return 0;
}