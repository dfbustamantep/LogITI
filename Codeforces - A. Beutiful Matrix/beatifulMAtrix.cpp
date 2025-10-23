#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int matrix [5][5];
    int e=0;
    int posI=0,posJ=0;
 
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>e;
            matrix[i][j]=e;
            if(e==1){
                posI=i;
                posJ=j;
            }
        }
    }
 
    int m=(abs(posI-2)+abs(posJ-2));
    
    cout<<m<<endl;
 
}