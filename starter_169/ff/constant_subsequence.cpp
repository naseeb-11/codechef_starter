#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define un unsigned long long
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"

const ll M = 1e9 + 7;

bool chk(ll mx,vector<ll> &pos,vector<ll> &neg){
   ll sm = 0,mxsum=0;
   ll i=0;
   ll j=0;
   ll m = neg.size();
   ll n = pos.size();
   while(i<n){
       if(sm+pos[i]>mx){
           if(j<m){
              sm+=neg[j];
              j++; 
           }
           else
            return 0;
       }
       else{
        sm+=pos[i]; i++;
       }
       mxsum=max(mxsum,sm);
       if(sm<0)
        sm=0;
   }
   if(mxsum>mx)
    return 0;
   else 
    return 1;
}

void usool()
{
  ll n; cin>>n;
  vector<ll> pos,neg;
  
  ll z=0,sum=0;
  for(ll i=0;i<n;i++){
      ll x; cin>>x;
      if(x==0)
       z=1;
       
      if(x<0)
       neg.pb(x);
      if(x>0){
       pos.pb(x);
          sum+=x;
      }
  } 
  
  
  if(neg.size()==0){
      cout<<sum<<endl;
      return;
  }
  if(pos.size()==0){
       cout<<0<<endl;
      return;
  }
   
  ll mx = accumulate(all(pos),0ll);
  
  ll low, high;
  if(pos.size())
   high=mx;
  else
   high=0;
 
  
  if(pos.size())
   low = *max_element(all(pos));
  else
   low=0;
   
  while(high-low>1){
      ll mid = (low+high)/2;
      if(chk(mid,pos,neg))
       high=mid;
      else
       low=mid+1;
  } 
  if(chk(low,pos,neg))
   cout<<low<<endl;
  else
   cout<<high<<endl;

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