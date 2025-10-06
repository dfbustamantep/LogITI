// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,result=0;
    cin>>n;
    string operation;
    
    for(int i=0;i<n;i++){
        cin>>operation;
        if(operation=="++X" || operation=="X++"){
            result++;
        }
        if(operation=="--X" || operation=="X--"){
            result--;
        }
    }
    cout<<result<<endl;
}
