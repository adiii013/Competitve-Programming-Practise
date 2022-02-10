#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool firstHalf(vector<int> v,int n,int a,int b){
    int minie = v[1];
    for(int i = 2;i<=n/2;i++){
        minie = min(minie,v[i]);
    }
    int maxie = v[n/2+1];
    for(int i = n/2+1;i<=n;i++){
        maxie = max(maxie,v[i]);
    }
    if(minie == a && maxie == b){
        return true;
    }
    return false;
}
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,a,b;cin>>n>>a>>b;
  vector<int> v(n+1);
  bool arr[n+1];
  memset(arr,1,sizeof(arr));
  arr[a]=0;arr[b]=0;
  int start =1,end = n;
  for(int i = 1;i<=n/2;i++){
      if(i==1)v[i] = a;
      else if(arr[end]==1){
          v[i]=end;
          arr[end]=0;
          end--;
      }
      else {end--;i--;}
  }
  for(int i = n/2+1;i<=n;i++){
      if(i==n/2+1) v[i] = b;
      else if(arr[start]==1){
          v[i]=start;
          arr[start]=0;
          start++;
      }
      else {start++;i--;}
  }
  if(firstHalf(v,n,a,b)){
      for(int i = 1;i<=n;i++){
          cout<<v[i]<<" ";
      }
      cout<<endl;
  }
  else{
      cout<<-1<<endl;
  }
}
return 0;
}