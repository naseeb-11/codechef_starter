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
  ll n ;cin>>n;
  
  vector<ll> v(n);
  for(ll i=0;i<n;i++) cin>>v[i];
  ll my = v[0];
  sort(v.begin()+1,v.end());
  ll ans=0;
   
  auto it = upper_bound(all(v),my);
  
  
  if(it!=v.end())
  {
      ll nn = *it;
     ll rr =  (nn-my+1+1)/2; // formula of number of numbers in range [l,r] included such that abs(upper_bound - myticket ) is equal/smallest than other tickets . 
     ans+=rr;
  }
  else
   ans+=1000000-my+1; // from myticket to last range i.e 1e6
  if(it!=v.begin()+1)
  {
      --it;
      ll nn = *it;
      ans+=(my-nn+1+1)/2;
  }
  else
   ans+=my-1+1; // just to understand 
  cout<<ans-1<<endl;
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