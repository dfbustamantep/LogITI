#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        //Bitset estructura de datos que guarda el dato como binario
        bitset<32> a(x);
        bitset<32> b(y);
        bitset<32> c(z);
        string ans = "YES";
        for(int i=0;i<32;i++){
            if(a[i]+b[i]+c[i]==2){
                ans="NO";
                break;
            } 
        }
        cout<<ans<<endl;
    }
}