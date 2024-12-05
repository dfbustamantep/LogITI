//Codeforces 2027A

#include<iostream>

using std::cout;
using std::cin;
using std::endl;
int main(){
	int t,n,w,h;
	
	int wMax=0;
	int hMax=0;
	int r;
	//Casos de prueba
	cin>>t;
	
	
	for(int i=0;i<t;i++){
		cin>>n;
		r=0;
		wMax=0;
		hMax=0;
		for(int j=0;j<n;j++){
			cin>>w>>h;
			if(wMax<w){
				wMax=w;
			}
			if(hMax<h){
				hMax=h;
			}
		}
		r=2*(wMax+hMax);
		cout<<r<<endl;
	}
	
	
	return 0;
}
