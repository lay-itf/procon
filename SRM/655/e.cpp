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

class BichromeBoard
{
public:
	string ableToDraw(vector <string> board){
		for(int i=0;i<board.size();i++){
			for(int j=0;j<board[0].size();j++){
				bool b=false,w=false;
				for(int k=0;k<4;k++){
					int y=i+dy[k],x=j+dx[k];
					if(y<0 || y>=board.size() || x<0 || x>=board[0].size()) continue;
					if(board[y][x]=='W') w=true;
					if(board[y][x]=='B') b=true;
				}
				if(w&&b) return "Impossible";
				
				if(board[i][j]=='?'){
					if(w) board[i][j]='B';
					else board[i][j]='W';
				}
			}
		}

		return "Possible";
	}
};