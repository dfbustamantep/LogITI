#include <bits/stdc++.h>
#include <ostream>
using namespace std;
 
int main() {
	int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
 
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
 
        sort(v.begin(),v.end());
        //int prom = (v[n-1]+v[n-2])/2;
        //cout<<prom<<endl;
        cout<<v[n-1]<<endl;
    }
 
}