// Source: https://usaco.guide/general/io

#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int t,a,b,c;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        vector<int> digits={a,b,c};
        //Ordena de menor a mayor
        sort(digits.begin(),digits.end());
        if (digits[1]+digits[2]>=10) {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
