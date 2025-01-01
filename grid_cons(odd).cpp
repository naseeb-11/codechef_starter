#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define un unsigned long long
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"

const ll M = 1e9 + 7;

void print(vector<ll> &v){
    for(auto it:v)
     cout<<it<<" ";
    cout<<endl; 
    ll x = v[v.size()-1];
    for(ll i=v.size()-1;i>=1;i--)
     v[i]=v[i-1];
    v[0]=x; 
}
void usool()
{
  ll n; cin>>n;
  
  vector<ll> v(n);
  for(ll i=1;i<=n;i++)
   v[i-1]=i;
  ll to = (n+1)/2;
  reverse(all(v));
  reverse(v.begin(),v.begin()+to);
  reverse(v.begin()+to,v.end());
  
  for(ll i=0;i<n;i++){
      print(v);
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