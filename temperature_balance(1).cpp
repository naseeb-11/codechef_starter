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
  vector<ll> v(n);
  for(ll i=0;i<n;i++) cin>>v[i];
  
  map<ll,ll> pos,neg;
  for(ll i=0;i<n;i++){
      if(v[i]<0)
       neg[i]=v[i];
      else if(v[i]>0)
       pos[i]=v[i];
  }
  ll ans=0;
  for(ll i=0;i<n;i++){
      if(v[i]>0){
          while(v[i]>0){
              auto it = neg.lower_bound(i); // finding nearest negative 
              ll nn = abs(it->second);
              ll mn = min(nn,v[i]);   // checking how much can i transfer  
              
              v[i]-=mn;
              v[it->first]+=mn; // updating both potentials
              
              ans+=mn*(it->first - i); // updating ans 
              it->second+=mn; // updating in map 
              
              if(it->second == 0)
               neg.erase(it);
          }
      }
      if(v[i]<0){
          while(v[i]<0){
              auto it = pos.lower_bound(i);
              ll nn = abs(it->second);
              ll myn = abs(v[i]);
              
              ll mn = min(nn,myn);
              v[i]+=mn;
              v[it->first]-=mn;
              
              ans+=mn*(it->first - i);
              it->second-=mn;
              
             
              if(it->second == 0)
               pos.erase(it);
          }
      }
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