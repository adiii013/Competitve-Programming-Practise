#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  int arr[n][5];
  for(int i = 0;i<n;i++){
      for(int j = 0;j<5;j++){
          cin>>arr[i][j];
      }
  }
  bool flag = false;
  for(int i = 0;i<4;i++){
      for(int j = i+1;j<5;j++){
         int first = 0,second = 0,both = 0;
         for(int k = 0;k<n;k++){
             if(arr[k][i]==1 && arr[k][j]==1) both++;
             else if(arr[k][i]==1) first++;
             else if(arr[k][j]==1) second++;
         }
         int one = n/2 -first,two = n/2-second;
         if(one>=0 && two>=0 && both==one+two){
             flag = true;
             break;
         }
      }
      if(flag) break;
  }
   if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
return 0;
}