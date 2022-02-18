#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  vector<int> arr(n);
  for(int i = 0;i<n;i++){
      cin>>arr[i];
  }
 int srch = -1,start = -1,last = -1;
 for(int i = 0;i<n;i++){
     if(arr[i]!=i+1){
         srch = i+1;
         start = i;
         break;
     }
 }
 if(srch==-1){
     for(int i = 0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
 }
 else{
     for(int i = 0;i<n;i++){
         if(arr[i]==srch){
             last = i;
             break;
         }
     }
     reverse(arr.begin()+start,arr.begin()+last+1);
     for(int i = 0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
 }
}
return 0;
}