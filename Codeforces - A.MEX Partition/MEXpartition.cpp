// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        //crear un vector de tama;o 100 para mirar si los numeros aparecen
        vector<int> a(101,0);
        int b;

        for(int i=0;i<n;i++){
            cin>>b;
            a[b]++;
        }

        int ans=0;
        for(int i=0;i<=100;i++){
            //queremos el menor numero excluido
            if(a[i]==0){
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
}