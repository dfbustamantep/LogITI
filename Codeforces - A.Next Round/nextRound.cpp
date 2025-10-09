// Source: https://usaco.guide/general/io
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,k,cont=0;
    cin>>n>>k;
 
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ka=a[k-1];
 
    for(int i=0;i<n;i++)
    {
        if(a[i]==0){
            break;
        }
        if(a[i]>=ka){
            cont++;
        }
    }
    cout<<cont;
}