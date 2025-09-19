#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// sumatoria n(n+1)/2
    long long n,sumatoria;
    cin>>n;
    sumatoria=(n*(n+1))/2;
 
    long long numbers=0,n1;
 
    for(int i=0;i<(n-1);i++){
        cin>>n1;
        numbers+=n1;
    }
 
    cout<<sumatoria-numbers;
}