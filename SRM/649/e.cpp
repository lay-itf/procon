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

class CartInSupermarketEasy
{
public:

	int calc2(int left,int N,int K){

		const int L=left;

		int n=N,k=K;
		if(k==0) return N;

		k--; int right=N-left;

		for(int i=0;i<k;i++){
			left--;
			right-=left;
			if(left>=right) break;
		}

		if(left>=right) return L+1;
		else return K+max(left,right);

	}

	int calc(int N, int K){

		int res=99999;
		for(int i=1;i<=N/2;i++){
			res=min(res,calc2(i,N,K));
		}

		return res;
	}
};