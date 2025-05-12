/*https://codeforces.com/problemset/problem/1743/A*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n,Digits,m;//test cases,numbers that rembermber that not use,solution,10-n
	cin>>t;
	int r;
	while(t--){
		Digits=0;
		cin>>n;
		//Digits that I discard
		m=10-n;
		//save the array of numbers,its not used
		for(int i=0;i<n;i++){
			cin>>r;	
		}
		//Digits=factorial(m)/(2*factorial(m-2));
		Digits=3*m*(m-1);
		cout<<Digits<<std::endl;
		
	}
	return 0;
}