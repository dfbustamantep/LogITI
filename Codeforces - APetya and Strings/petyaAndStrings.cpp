// Source: https://usaco.guide/general/io
 
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
 
int main() {
	string a,b;
    int sumA=0,sumB=0;
    cin>>a;cin>>b;
 
    for(char &c:a){
        c = toupper(c);
        //sumA += int(c);
    }
 
    for(char &c:b){
        c = toupper(c);
        //sumB += int(c);
    }
 
    if(a<b){
        cout<<-1;
    }
    else if(a>b){
        cout<<1;
    }
    else{
        cout<<0;
    }
}