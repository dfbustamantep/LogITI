#include <bits/stdc++.h>
using namespace std;
 
int main() {
    //Number of problems bring to the team
	int n,cont=0,a=0,b=0,c=0;
    cin>>n;
 
    while(n--){
        cin>>a>>b>>c;
        if(a+b+c>1){
            cont++;
        }
    }
    cout<<cont;
    
}