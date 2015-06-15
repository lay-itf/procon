#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 
#include <ctime> 
#include <cstdio> 
#include <functional> 
#include <set> 
#include <sstream> 
#include <cctype>
#include <stack>
#include <queue>
#include <cstring>

using namespace std; 

int main(){

	int n;
	cin>>n;

//for(int n=1;n<=5000;n++){
	if(n<=2) cout<<1<<endl<<1<<endl;
	else if(n==3) cout<<2<<endl<<"1 3"<<endl;
	else if(n==4) cout<<4<<endl<<"2 4 1 3"<<endl;
	else{
		if(n%2){
			cout<<n<<endl;
			cout<<(n+1)/2<<" ";
			for(int i=0;i<n/2;i++){
				cout<<i+1<<" "<<n-i<<" ";
			}
			cout<<endl;
		}else{
			cout<<n<<endl;
			cout<<n/2<<" "<<n/2+2<<" ";
			for(int i=0;i<n/2-2;i++){
				cout<<i+1<<" "<<n-i<<" ";
			}
			cout<<n/2-1<<" "<<n/2+1<<endl;
		}
	}
//}
	return 0;

}