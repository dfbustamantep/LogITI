// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	long long n;
    cin>>n;
    vector<long long> val;
    val.push_back(n);
    while(n!=1){
        if(n%2==0) n=n/2;
        else n=(n*3)+1;
        val.push_back(n);
    }

    for(long long el:val)
        cout<<el<<" ";
}
