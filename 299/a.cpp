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
#include <map>

using namespace std; 

int main(){

	map<int,string> ans;
	ans[0]="zero";
	ans[1]="one";
	ans[2]="two";
	ans[3]="three";
	ans[4]="four";
	ans[5]="five";
	ans[6]="six";
	ans[7]="seven";
	ans[8]="eight";
	ans[9]="nine";
	ans[10]="ten";
	ans[11]="eleven";
	ans[12]="twelve";
	ans[13]="thirteen";
	ans[14]="fourteen";
	ans[15]="fifteen";
	ans[16]="sixteen";
	ans[17]="seventeen";
	ans[18]="eighteen";
	ans[19]="nineteen";
	ans[20]="twenty";
	ans[30]="thirty";
	ans[40]="forty";
	ans[50]="fifty";
	ans[60]="sixty";
	ans[70]="seventy";
	ans[80]="eighty";
	ans[90]="ninety";


	int n;
	cin>>n;

	if(n<=20) cout<<ans[n]<<endl;
	else{
		cout<<ans[n-n%10];
		if(n%10) cout<<"-"<<ans[n%10];
		cout<<endl;
	}

	return 0;

}