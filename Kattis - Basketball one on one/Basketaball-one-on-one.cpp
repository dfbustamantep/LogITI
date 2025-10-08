// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string score;
    cin>>score;
    int scorea=0,scoreb=0;
    
    for(int i=0;i<score.length();i=i+2){
        if(score[i]=='A'){
            scorea+=score[i+1]-'0';
        }
        else{
            scoreb+=score[i+1]-'0';
        }
    }

    if (scorea>scoreb) {
        cout<<"A"<<endl;
    }
    else {
        cout<<"B"<<endl;
    }
}
