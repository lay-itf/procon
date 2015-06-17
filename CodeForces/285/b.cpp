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

	int q;
	cin>>q;

	map<string,string> o2n,n2o;
	map<string,bool> used;
	set<string> old;

	for(int i=0;i<q;i++){
		string n,o;
		cin>>o>>n;

		if(used[o]==false){
			o2n[o]=n;
			n2o[n]=o;
			old.insert(o);
		}else{
			o2n[n2o[o]]=n;
			n2o[n]=n2o[o];
		}

		used[o]=used[n]=true;
	}

	cout<<old.size()<<endl;
	for(auto it=old.begin();it!=old.end();it++){
		cout<<(*it)<<" "<<o2n[*it]<<endl;
	}

}