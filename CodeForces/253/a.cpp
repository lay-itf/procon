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

int main()
{
	bool b[30]={false};
	char c;

	while((c=getchar())!='}'){
		if(c>='a' && c<='z') b[c-'a']=true;
	}

	int res=0;
	for(int i=0;i<30;i++) if(b[i])res++;

	cout<<res<<endl;

	return 0;
}
