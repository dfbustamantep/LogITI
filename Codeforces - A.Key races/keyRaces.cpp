// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    //text of s characters 
    //first participan types one character in v1 miliseconds and has t1 ping
    //second participan types one character in v2 miliseconds and has t2 ping

	int s,v1,v2,t1,t2,tp1=0,tp2=0; cin>>s>>v1>>v2>>t1>>t2;
    
    tp1=t1+(s*v1)+t1;
    tp2=t2+(s*v2)+t2;
    if(tp1<tp2)cout<<"First";
    if(tp1>tp2)cout<<"Second";
    if(tp1==tp2)cout<<"Friendship";
}
