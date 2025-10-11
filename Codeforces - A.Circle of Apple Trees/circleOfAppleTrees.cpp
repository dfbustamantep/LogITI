#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t,n,mA=0;
    cin>>t;//test cases
    
    while(t--){
        mA=0;
        cin>>n;//nuymber of apples
        int b[n];

        for(int i=0;i<n;i++){
            cin>>b[i];//beuty of apples
        }

        sort(b,b+n);
        int val=0;
        for(int i=0;i<n;i++){
            //cout<<b[i]<<" ";
            if(b[i]>val){
                val=b[i];
                //cout<<val<<endl;
                mA++;
            }
        }
       cout<<mA<<endl;
    } 
}