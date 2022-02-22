#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int t;cin>>t;
vector<int> v(50);
for(int i = 0;i<50;i++){
  v[i] = i+1;
}
while(t--){
  int n;cin>>n;
  if(n==3){
    cout<<"3 2 1\n";
    cout<<"1 3 2\n";
    cout<<"3 1 2\n";
  }
  else{
    int count = n-1, end = n;
    for(int i = 0;i<end;i++){
      for(int j = 0;j<end;j++){
         cout<<v[count]<<" ";
         count--;
         if(count<0){
           count = end-1;
         }
      }
      count--;
      cout<<endl;
      if(count<0){
        count = end-1;
      }
    }
  }
}
return 0;
}