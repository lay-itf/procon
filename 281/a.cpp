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

	string home,away;
	cin>>home>>away;

	int n;
	cin>>n;

	int y_h[100]={0},y_a[100]={0};
	int r_h[100]={0},r_a[100]={0};

	for(int i=0;i<n;i++){
		int t,num;
		char team,c;
		cin>>t>>team>>num>>c;

		if(team=='h'){
			if(r_h[num]==0 && (y_h[num]!=0 || c=='r')){
				cout<<home<<" "<<num<<" "<<t<<endl;
				r_h[num]=1;
			}
			else if(y_h[num]==0) y_h[num]=t;
		}
		if(team=='a'){
			if(r_a[num]==0 && (y_a[num]!=0 || c=='r')){
				cout<<away<<" "<<num<<" "<<t<<endl;
				r_a[num]=1;
			}
			else if(y_a[num]==0) y_a[num]=t;
		}

	}

}