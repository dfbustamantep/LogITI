#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
    cin>>t;
    // using set to store the distinct numbers because set dont allow duplicates
    set<int> l;
    int h;
    
    for(int i=0;i<t;i++){
        cin>>h;
        //insert numbers into the set with the method
        l.insert(h);
    }
 
    cout<<l.size();
}