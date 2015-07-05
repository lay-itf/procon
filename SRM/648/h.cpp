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
#include <complex>

using namespace std;

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

class ShufflingCardsDiv2
{
public:
	
string shuffle(vector <int> permutation){

	srand(time(NULL));
	clock_t start=clock();

	int n=permutation.size();
	vector<int> C(n);
	for(int i=0;i<n;i++) C[i]=i+1;

	clock_t end=clock();
	while((double)(end-start)/CLOCKS_PER_SEC<=1.90){

		for(int i=0;i<n/2;i++){

			int r=rand()%(n/2);
			swap(C[i],C[r]);
		}
		for(int i=0;i<n/2;i++){

			int r=rand()%(n/2);
			swap(C[n/2+i],C[n/2+r]);
		}

		vector<int> C2(n);
		for(int i=0;i<n/2;i+=2){
			C2[2*i]=C[i];
			C2[2*i+1]=C[i+1];
		}

		if(C2==permutation) return "Possible";
		
		C=C2;
		end=clock();
	}
	return "Impossible";

}
};
