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

int check(vector<unsigned long long> &a,int l,int r){
/*
	for(int i=l;i<=r;i++){
		cout<<a[i];
	}
	cout<<endl;
*/
	int res=1;
	for(int i=l+1;i<=r;i++){
		 if(a[i-1]>= a[i]){
		//	cout<<"res:"<<res<<endl; 
			return res;
		}
		res++;
	}

	//cout<<"res:"<<res<<endl;
	return res;
}

int main()
{
	int n,m,k,p;
	cin>>n>>m>>k>>p;

	vector< vector<int> > a(n, vector<int>(m));

	vector<int> yoko(n),tate(m);

	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){ cin>>a[i][j]; sum+=a[i][j];}
		yoko[i]=sum;
//		cout<<yoko[i]<<endl;
	}

	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=0;j<n;j++){sum+=a[j][i];}
		tate[i]=sum;
//		cout<<tate[i]<<endl;
	}

	unsigned long long res=0;
//	int yoko_count[n]={0},tate_count[m]={0};
	vector<int> yoko_count(n,0),tate_count(m,0);
	int yoko_count_sum=0,tate_count_sum=0;
	for(int i=0;i<k;i++){
		int y_id=0,t_id=0;
		for(int j=1;j<n;j++)
			if(yoko[y_id]-yoko_count[y_id]*p*m<yoko[j]-yoko_count[j]*p*m) y_id=j;

		for(int j=1;j<m;j++)
			if(tate[t_id]-tate_count[t_id]*p*n<tate[j]-tate_count[j]*p*n) t_id=j;

//		cout<<yoko[y_id]<<" "<<tate[t_id]<<endl;

		if(yoko[y_id]-yoko_count[y_id]*p*m-tate_count_sum*p>tate[t_id]-tate_count[t_id]*p*n-yoko_count_sum*p || (yoko[y_id]-yoko_count[y_id]*p*m-tate_count_sum*p==tate[t_id]-tate_count[t_id]*p*n-yoko_count_sum*p &&n>=m)){
			res+=yoko[y_id]-yoko_count[y_id]*p*m-tate_count_sum*p;

//			cout<<"get"<<yoko[y_id]-yoko_count[y_id]*p*m-tate_count_sum*p<<endl;
			yoko_count[y_id]++;
			yoko_count_sum++;
		}else{
			res+=tate[t_id]-tate_count[t_id]*p*n-yoko_count_sum*p;
//			cout<<"get"<<tate[t_id]-tate_count[t_id]*p*n-yoko_count_sum*p<<endl;

			tate_count[t_id]++;
			tate_count_sum++;
		}	


	}

	cout<<res<<endl;

	return 0;
}
