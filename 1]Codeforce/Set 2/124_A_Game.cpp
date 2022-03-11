#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
 int n;cin>>n;
 vector<int> v(n);
 for(int i = 0;i<n;i++) cin>>v[i];
 int start = 0;
 int end = n;
 for(int i = 0;i<n;i++){
     if(v[i]==0){
         break;
     }
     start++;
 }
 for(int i = n-1;i>=0;i--){
    if(v[i]==0){
        break;
    }
    end--;
 }
 int diff = end-start;
 if(diff<0) cout<<0<<"\n";
 else cout<<end-start+1<<"\n";
}
return 0;
}