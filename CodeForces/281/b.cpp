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

	long long sum1=0,sum2=0;
	string s1,s2;
	int last;

	for(int i=0;i<n;i++){
		long long a;
		cin>>a;
		if(a>0){
			sum1+=a;
			last=1;
			stringstream ss;
			ss<<a;
			s1+=ss.str();
		}else{
			a=-a;
			sum2+=a;
			last=2;
			stringstream ss;
			ss<<a;
			s2+=ss.str();
		}
	}

	if(sum1>sum2) cout<<"first"<<endl;
	else if(sum1<sum2) cout<<"second"<<endl;
	else{
		if(s1>s2) cout<<"first"<<endl;
		else if(s1<s2) cout<<"second"<<endl;
		else{
			if(last==1) cout<<"first"<<endl;
			else cout<<"second"<<endl;
		}

	}

}