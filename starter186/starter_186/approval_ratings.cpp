#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define un unsigned long long
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"

const ll M = 1e9 + 7;

7 * 5 = 35

void usool()
{
  vector<ll> diff;
  ll sum = 0;
  for(ll i=0;i<5;i++){
      ll x; cin>>x;
      sum+=x;
      diff.pb(x);
  } 
  
  
  sort(all(diff));
  ll c = 0 , i= 0;
  while(sum<35){
      sum+=10-diff[i];
      c+=100;
      i++;
  }
  cout<<c<<endl;
  

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