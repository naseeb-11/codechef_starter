#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define un unsigned long long
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"

const ll M = 1e9 + 7;


void usool()
{
  ll n,k; cin>>n>>k;
  vector<ll> v(n);
  map<ll,ll> m;
  
  ll mx = 0;
  for(ll i=0;i<n;i++){
      cin>>v[i];
      m[v[i]]++;
      mx=max(m[v[i]],mx);
  } 
  if(m[k]>=mx)
  {
      cout<<"0"<<endl;
      return;
  }
  vector<ll> fr(20,0);
  ll mx2=0;
  for(ll i=0;i<n;i++){
       fr[v[i]-1]++;
       mx2=max(mx2,fr[v[i]-1]);
       if(fr[k-1]>=mx2){
           cout<<"1"<<endl;
           return;
       }
  }
  vector<ll> fnb(20,0);
  ll mx3 = 0;
  for(ll i=n-1;i>=0;i--){
       fnb[v[i]-1]++;
       mx3=max(mx3,fnb[v[i]-1]);
       if(fnb[k-1]>=mx3){
           cout<<"1"<<endl;
           return;
       }
  }
  cout<<2<<endl;
  
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