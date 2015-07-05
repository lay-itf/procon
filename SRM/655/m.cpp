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

const int dy[]={-1,1,0,0};
const int dx[]={0,0,-1,1};

class FoldingPaper2
{
public:
	int solve(int W, int H, int A){

		int res=-1;

		for(int i=1;i<=A;i++){
			if(A%i) continue;

			int w=i,h=A/i;
			int WW=W,HH=H;
			int cnt=0;

			if(w>W || h>H) continue;

//			cout<<w<<" "<<h<<endl;

			while(w<WW){
				cnt++;

				int d=WW/2;
				WW-=d;
			}
			while(h<HH){
				cnt++;

				int d=HH/2;
				HH-=d;
			}

//			cout<<cnt<<endl;
			if(res==-1 || res>cnt) res=cnt;

		}

		return res;

	}
};