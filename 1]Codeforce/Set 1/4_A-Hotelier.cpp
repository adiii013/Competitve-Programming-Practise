#include<bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
 
typedef long long ll;
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 int n;cin>>n;
 string s;cin>>s;
 string st = "";
 rep(0,10) st = st+'0';
 int arr[10];
 rep(0,10)arr[i]=0;
 rep(0,n){
   if(s[i]=='L'){
     for(int k =0;k<10;k++){
       if(arr[k]==0){ 
         st[k]='1';
         arr[k]=1;
         break;
         }
       
     }
   }
   else if(s[i]=='R'){
     for(int k =9;k>=0;k--){
       if(arr[k]==0){ 
         st[k]='1';
         arr[k]=1;
         break;
         }
       
   }
 }
   else{
     char c= s[i];
     int a = c - '0';
     st[a] = '0';
     arr[a]=0;
   }
 }
 cout<<st<<endl;
return 0;
}