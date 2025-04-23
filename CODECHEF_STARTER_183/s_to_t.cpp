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
  string s1,s2; cin>>s1>>s2;
  
  if(s1==s2){
      cout<<0<<endl;
      return;
  }
  ll fo=-1;
  for(ll i=1;i<=n;i++){
      if(s1[i-1]!=s2[i-1] && fo==-1){
          cout<<"-1"<<endl;
          return;
      }
      else if(s1[i-1]=='1'){
          fo=i;
          break;
      }
  }
  
  vector<ll> ans;
  for(ll i=fo+1;i<=n;i++){
      if(s1[i-1]=='0')
       ans.pb(i-1);
  }
  for(ll i=n;i>fo;i--){
      if(s2[i-1]=='0')
       ans.pb(i-1);
  }
  cout<<ans.size()<<endl;
  for(auto it:ans)
   cout<<it<<" ";
  cout<<endl; 
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