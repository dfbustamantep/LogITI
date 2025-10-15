// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    //k dollars for first bananas,dolars and bananas that he want
	int k, n, w; cin>>k>>n>>w;
	int pre=0;
    
    for (int i=1;i<=w;i++) {
        pre+=i*k;
    }
    //cout<<pre<<endl;
    if(pre>=n)cout<<pre-n;
    else cout<<0;
}
