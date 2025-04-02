/*A. Min Or Sum */
#include<iostream>

//using namespace std;
using std::cout;
using std::cin;

int main(){
    /*
    t number of test cases
    n size of array
    total is the total of the sum in the or
    */
    int t,n,total,number;
    cin>>t;
    
    while(t--){  // while t>0{t--}
        cin>>n;//size of array
        
        total=0;//reset total for each test case

        //loop to store the number that is given
        for (int i=0;i<n;i++){
            cin>>number;
            total |= number;
        }
        cout<<total<<std::endl;
    }
    
    return 0;
}