#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>

using namespace std;

class WolfDelaymaster
{
public:
	string check(string str){

		char f;


		if(str.size()%4!=0) return "INVALID";


		for(int i=0;i<str.size();){
			f=0;
			for(int j=1;j*4+i<str.size();){
				string wolf;
				for(int k=0;k<j;k++) wolf+="w";
				for(int k=0;k<j;k++) wolf+="o";
				for(int k=0;k<j;k++) wolf+="l";
				for(int k=0;k<j;k++) wolf+="f";

				cout<<wolf<<endl;

				if(str.substr(i,wolf.size())==wolf){ i+=wolf.size(); f=1; break;}
			}
			if(!f) return "INVALID";
		}

		return "VALID";

	}
};


