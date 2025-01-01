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
  ll n; cin>>n;
  
  for(ll i=1;i<=n;i++){
      if(i%2)
      {
          for(ll i=1;i<=n;i++)
           cout<<i<<" ";
          cout<<endl; 
      }
      else
      {
          for(ll i=n;i>=1;i--)
           cout<<i<<" ";
          cout<<endl; 
      }
      
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