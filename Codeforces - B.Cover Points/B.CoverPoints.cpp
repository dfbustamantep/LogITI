#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,a,b; 
    cin>>t;
    int ans = 0;
    for (int i=0;i<t;i++){
        cin >> a >> b;
        ans = max((a+b),ans);
    }
    cout<<ans;
    return 0;
}