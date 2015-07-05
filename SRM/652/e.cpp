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

class RobotOnMoonEasy
{
public:

	string isSafeCommand(vector <string> board, string S){

		int x,y;
		for(int i=0;i<board.size();i++){
			for(int j=0;j<board[i].size();j++){
				if(board[i][j]=='S'){
					y=i;x=j;
				}
			}
		}

		for(int i=0;i<S.size();i++){
			x2=x;y2=y;
			if(S[i]=='U') y2--;
			else if(S[i]=='D') y2++;
			else if(S[i]=='L') x2--;
			else if(S[i]=='R') x2++;
			if(board[y2][x2]!='#'){x2=x;y2=y;}
			if(x<0 || x>board[0].size() || y<0 || y>board.size()) return "Dead";
		}

		return "Alive";

	}
};