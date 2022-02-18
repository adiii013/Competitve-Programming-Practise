#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
   int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    ll v1=0,v2=0;
    for(int i=0;i<n;i+=2) v1 = __gcd(v1,a[i]);
    for(int i=1;i<n;i+=2) v2 = __gcd(v2,a[i]);
    
    bool ok = true;
    for(int i=0;i<n;i+=2){
        if(a[i]%v2==0){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<v2<<"\n";
        return;
    }
    
    ok = true;
    for(int i=1;i<n;i+=2){
        if(a[i]%v1==0){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<v1<<"\n";
        return;
    }
    
    cout<<0<<"\n";
}
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll t;cin>>t;
while(t--){
 solve();
}
return 0;
}