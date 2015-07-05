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

long gcd(long a, long b){

	if(a%b==0) return b;
	else return gcd(b,a%b);

}

long lcm(long a, long b){
	return a*b/gcd(a,b);
}

class ElectronicPetEasy
{
public:
	
string isDifficult(int st1, int p1, int t1, int st2, int p2, int t2){

	set<long> t;
	for(int i=0;i<t1;i++){
		t.insert(st1+p1*i);
	}
	for(int i=0;i<t2;i++){
		t.insert(st2+p2*i);
	}

	if(t.size()==t1+t2) return "Easy";
	else return "Difficult";
};
}
