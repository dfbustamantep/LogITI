#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,a,b,c,d; 
    cin>>t;
    for (int i=0;i<t;i++){
        cin >> a >> b >> c >> d;
        if (a==b&& a==c && a==d){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    
    return 0;
}