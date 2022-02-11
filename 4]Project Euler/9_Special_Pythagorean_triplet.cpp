#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int s = 1000;
bool flag = false;
int a,b,c;
for(int i = 1;i<s/3;i++){
    for(int j = i ; j<s/2;j++){
      c = s-i-j;
      if(i*i + j*j == c*c){
          flag = true;
          a = i; b =j;
          break;
      } 
    }
    if(flag){
        cout<<a*b*c<<endl;
        break;
    }
}


return 0;
}