#include<iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;
using std::abs;

int main(){
	int n=0;
	//distances in x and y
	int dx,dy;
	
	//Vertices that weren�t eresade by Wilburs friends
	cin>>n;
 
	int coordinates[n][2];
	for(int i=0;i<n;i++){
		cin>>coordinates[i][0]>>coordinates[i][1];	
	}
	
	if(n==1){
		cout<<-1;
        return 0;
	}
	
	//When you only have too coordinates
	if(n==2){
						//x0           //x1					//y0    //y1
		if(coordinates[0][0]==coordinates[1][0]||coordinates[0][1]==coordinates[1][1]){
			//they are in same axys and I can know if they form a rectangle
			cout<<-1;
            return 0;
		}
		else{
			dx=abs(coordinates[0][0]-coordinates[1][0]);
			dy=abs(coordinates[0][1]-coordinates[1][1]);
			cout<<dx*dy;
            return 0;
		}
	}
	
	if(coordinates[0][0]!=coordinates[1][0]){
		dx=abs(coordinates[0][0]-coordinates[1][0]);
	}
	else{
		dx=abs(coordinates[0][0]-coordinates[2][0]);
	}
    
	if(coordinates[0][1]!=coordinates[1][1]){
		dy=abs(coordinates[0][1]-coordinates[1][1]);	
	}
	else{
		dy=abs(coordinates[0][1]-coordinates[2][1]);
	}
	cout<< dx*dy;
    return 0;
	
}