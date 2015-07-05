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
#include <map>

using namespace std;

bool is_int(double num){
	return floor(num)==ceil(num);
}

class AliceGameEasy
{
public:
//–¢Š®¬
long long findMinimumValue(long long x, long long y){

		if(x==0 && y==0) return 0;

		if(y==0) return 1;

		long long sum=0;num=0;
		for(num=0;sum>=x+y;num++) sum+=num;

		num--;
		if(sum==x+y){

			if(x<=num) return 1;
			else{

				long long sum=0;
				for(long long i=num;i>=0;i--){
					//cout<<"sum"<<sum<<endl;
					sum+=i;
					if(sum==x) return num-i+1;
					if(sum+i-1>x) return num-i+2;
				}

			}

		}
		 return -1;
		

	}
};