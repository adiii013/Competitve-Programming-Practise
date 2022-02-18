#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int arr[3];
  for(int i = 0;i<3;i++) cin>>arr[i];
  int first = (max(arr[1],arr[2])<arr[0])?(0):max(0,max(arr[1],arr[2])-arr[0]+1);
  int second = (max(arr[0],arr[2])<arr[1])?(0):max(0,max(arr[0],arr[2])-arr[1]+1);
  int third = (max(arr[1],arr[0])<arr[2])?(0):max(0,max(arr[1],arr[0])-arr[2]+1);
  cout<<first<<" "<<second<<" "<<third<<endl;
}
return 0;
}