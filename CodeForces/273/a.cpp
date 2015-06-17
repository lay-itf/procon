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

bool prime[1000001];

int main()
{	
	int sum=0;
	for(int i=0;i<5;i++){
		int c;
		cin>>c;
		sum+=c;
	}

	if(sum%5 || sum==0) cout<<-1<<endl;
	else cout<<sum/5<<endl;

	return 0;
}
