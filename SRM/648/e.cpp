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

class Fragile2
{
public:
	
int countPairs(vector <string> graph){

	int conn=0;
	int res=0;
	int n=graph.size();

	vector<bool> vis(n,false);

	for(int i=0;i<n;i++){
		if(vis[i]==false){
			conn++;
			vis[i]=true;
			queue<int> q;
			q.push(i);

			while(!q.empty()){
				int pos=q.front();
				q.pop();
				for(int j=0;j<n;j++){
					if(graph[pos][j]=='Y' && vis[j]!=false){
						vis[j]=true;
						q.push(j);
					}
				}
			}

		}
	}

	for(int x=0;x<n;x++){
		for(int y=x+1;y<n;y++){
			int conn2=0;
			for(int i=0;i<n;i++){
				if(vis[i]==false && i!=x && i!=y){
					conn++;
					vis[i]=true;
					queue<int> q;
					q.push(i);

					while(!q.empty()){
						int pos=q.front();
						q.pop();
						for(int j=0;j<n;j++){
							if(graph[pos][j]=='Y' && vis[j]!=false && j!=x && j!=y){
								vis[j]=true;
								q.push(j);
							}
						}
					}

				}
			}
			if(conn!=conn2) res++;
		}
	}
	return res;



};