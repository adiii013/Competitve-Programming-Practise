#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isSorted(vector<int> v,int n){
    for(int i = 0;i<n-1;i++){
        if(v[i]>v[i+1]) return true;
    }
    return false;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  vector<int> v(n);
  for(int i = 0;i<n;i++) cin>>v[i];
  int count = 0;
  while(isSorted(v,n)){
      for(int i = count%2;i<n-1;i=i+2){
          if(v[i]>v[i+1]){
              swap(v[i],v[i+1]);
          }
      }
      count++;
  }
  cout<<count<<endl;
}
return 0;
}