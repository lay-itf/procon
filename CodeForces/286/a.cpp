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

	string s;
	cin>>s;

	for(int i=0;i<s.size();i++){
		for(char c='a';c<='z';c++){
			string s2;
			if(i==0) s2=c+s;
			else if(i==s.size()-1) s2=s+c;
			else s2=s.substr(0,i)+c+s.substr(i);

			string s3=s2;
			reverse(s3.begin(),s3.end());

			if(s2==s3){cout<<s2<<endl; return 0;}

		}
	}

	cout<<"NA"<<endl;
	return 0;

}