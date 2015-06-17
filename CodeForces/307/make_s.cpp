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

typedef map<char,int> M;

int main(){

	srand(time(NULL));

	string a,b,c;
	for(int i=0;i<100000;i++){
		a+=rand()%26+'a';
		b+=rand()%26+'a';
		c+=rand()%26+'a';
	}
	
	cout<<a<<endl<<b<<endl<<c<<endl;
	
	return 0;

}