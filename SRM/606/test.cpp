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

using namespace std;

class EllysNumberGuessing
{
public:
	int getNumber(vector <int> guesses, vector <int> answers){
		const int N=guesses.size();
		vector<int> x,y;

		for(int i=0;i<N;i++){
			if((find(x.begin(),x.end(),guesses[i])==find(y.begin(),y.end(),answers[i])) &&  find(x.begin(),x.end(),guesses[i])!=x.end())
			{x.push_back(guesses[i]); y.push_back(answers[i]);}
		}
		return 0;
	}

};


int main(){

	string s="AAAAAAAAAAA";

	cout<<s.substr(0+4,99999999999999999);

	return 0;
}

