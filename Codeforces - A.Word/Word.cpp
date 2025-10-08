// Source: https://usaco.guide/general/io

#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <ios>
using namespace std;

int main() {
	string s;
    cin>>s;
    int may=0,min=0;

    for(char c:s){
        if(isupper(c))
            may++;
        if(islower(c))
            min++;
    }

    if (min>=may) {
        //usamos & porque hace referencia al espacio donde esta ese caracter lo que hace que se modifique en 
        //la cadena
        for (char &c : s) {
            c = tolower(c);
        }
    }
    else{
        for (char &c : s) {
            c = toupper(c);
        }
    }
    cout<<s;
}
