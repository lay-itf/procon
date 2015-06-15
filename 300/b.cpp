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

long q[64]={
1,
10,
11,
100,
101,
110,
111,
1000,
1001,
1010,
1011,
1100,
1101,
1110,
1111,
10000,
10001,
10010,
10011,
10100,
10101,
10110,
10111,
11000,
11001,
11010,
11011,
11100,
11101,
11110,
11111,
100000,
100001,
100010,
100011,
100100,
100101,
100110,
100111,
101000,
101001,
101010,
101011,
101100,
101101,
101110,
101111,
110000,
110001,
110010,
110011,
110100,
110101,
110110,
110111,
111000,
111001,
111010,
111011,
111100,
111101,
111110,
111111,
1000000
};

int main(){

	string s;
	cin>>s;

	int x=1;
	for(int i=0;i<s.size();i++) x=max(x,(int)(s[i]-'0'));

	string tmp;
	for(int i=0;i<s.size();i++) tmp+="0";
	vector<string> ans(x,tmp);

	for(int i=0;i<s.size();i++){
		for(int j=0;j<s[i]-'0';j++){
			ans[j][i]='1';
		}
	}

	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++) cout<<atoi(ans[i].c_str())<<" ";
	cout<<endl;

	return 0;

}