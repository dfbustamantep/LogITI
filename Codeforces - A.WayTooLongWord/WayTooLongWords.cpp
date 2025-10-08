// Source: https://usaco.guide/general/io

//more than 10 characters is long
// primer letra y ulktima letra y en la mitad la cantidad de letras que hay
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string word;

    for (int i=0; i<n; i++) {
        cin>>word;

        if (word.size()>10) {
            char first = word.front();
            char last = word.back();
            cout<<first<<word.size()-2<<last<<endl;
        }
        else{
            cout<<word<<endl;
        }
    }
}
