#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int count = 0;
for(int i = 1;i<=1000;i++){
    if(i%5!=0 && i %7!=0 && i%3==0){
        count++;
    }
}
cout<<count;
return 0;
}