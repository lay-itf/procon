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

class PilingRectsDiv2
{
public:
	int getmax(vector <int> X, vector <int> Y, int limit){

		int ans=-1,ans_tmp;

		for(int i=0;i<X.size();i++){
			int x=X[i],y=Y[i];
			if(x*y>=limit) ans_tmp=1;
			else continue;

			for(int j=0;j<X.size();j++){
				if(i==j) continue;

				if(min(x,X[j])*min(y,Y[j]) >= min(x,Y[j])*min(y,X[j])){
					if(min(x,X[j])*min(y,Y[j])>=limit){
						ans_tmp++;
						x=min(x,X[j]);
						y=min(y,Y[j]);
					}
				}else{
					if(min(x,Y[j])*min(y,X[j])>=limit){
						ans_tmp++;
						x=min(x,Y[j]);
						y=min(y,X[j]);
					}
				}

			}


			if(ans_tmp!=0) ans=max(ans,ans_tmp);
		}

		return ans;

	}
};


