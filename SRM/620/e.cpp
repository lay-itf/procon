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

using namespace std;

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

class CandidatesSelectionEasy
{
public:
	vector <int> sort(vector <string> score, int x){

		vector<int> res;
		vector<bool> pushed(score.size(),false);

		for(char c='A';c<='Z';c++){
			for(int i=0;i<score.size();i++){
				if(score[i][x]==c && !pushed[i]){
					 res.push_back(i);
					pushed[i]=true;
				}
			}
		}

		return res;

	}
};
