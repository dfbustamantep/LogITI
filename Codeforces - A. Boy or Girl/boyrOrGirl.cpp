// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
	string t;
    cin>>t;
    unordered_set<char> un;
    for(char c:t){
        un.insert(c);
    }
    if(un.size()%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
