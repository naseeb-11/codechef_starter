#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define un unsigned long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define endl "\n"

const ll M = 1e9 + 7;


void usool()
{
  ll n ; cin>>n;
  vector<ll> v(n),tr(n);
  vector<vector<ll>> mv(33);
  for(ll i=0;i<n;i++) {
      cin>>v[i];
      ll jj = __builtin_popcountll(v[i]);
      tr[i]=jj;
      mv[jj].pb(v[i]);
  }
  for(ll i=0;i<33;i++){
      sort(all(mv[i]),greater<int>());
  }
  vector<ll> ans;
  for(ll i=0;i<n;i++){
      ans.pb(mv[tr[i]].back());
      mv[tr[i]].pop_back();
  }
  if(is_sorted(all(ans)))
   cout<<"Yes"<<endl;
  else
   cout<<"No"<<endl;
      
  
  
  
  
  

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