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

class AlienAndGame
{
public:
	int getNumber(vector <string> board){

		if(board.size()==1 || board[0].size()==1) return 1;

		for(int i=0;i<board[0].size();i++){
			if(board[0][i]=='W'){
				for(int j=0;j<board.size();j++){
					if(board[j][i]=='W') board[j][i]='B';
					else board[j][i]='W';
				}
			}
		}

		cout<<board[0]<<endl;

		return 0;

	}
};

/*
int main(){

	return 0;
}
*/
