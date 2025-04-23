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
  ll n ; cin>>n;
  vector<ll> v(n);
  for(ll i=0;i<n;i++) cin>>v[i];
  
  ll c=0;
  for(ll i=1;i<=n;i++){
      if(v[i-1]==i)
       c++;
  }
  
  ll ans = (c+1)/2;
  
  if(n%2==0){
      cout<<ans<<endl;
  }
  else{
      
      ll mid = (n+1)/2;
      if(v[mid-1]==mid){
         
        ll tmp = 0;
        for(ll i=1;i<mid;i++){
            if(v[i-1]<mid)
             tmp++;
        }
        ans=min(ans,tmp);
      }
      cout<<ans<<endl;
  }

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