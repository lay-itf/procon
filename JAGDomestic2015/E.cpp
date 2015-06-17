//2015年度模擬国内予選 E問題
//解説をそのまま実装(したつもり)

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
#include <cctype>
#include <stack>
#include <queue>
#include <cstring>
#include <map>

using namespace std; 

typedef pair<int,int> P;

//using on aoj1181(http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=1339767)
//f[0]:top
//f[1]:front(left)
//f[2]:front(right)
//f[5]+f[0]=f[4]+f[1]=f[3]+f[2]=7

//modify
//f[0]:u(top,z+), f[1]:f(front,y-), f[2]:r(right,x+), 
//f[3]:d(bottom,z-), f[4]:b(back,y+), f[5]:l(left,x-)
class Dice
{
public:
	vector<int> face;
	Dice(int l,int r,int f,int b,int d,int u){
		face.resize(6);
		face[0]=u,face[1]=f,face[2]=r;
		face[3]=d,face[4]=b,face[5]=l;
	}
	
	//x軸正方向にnum回回転
	void rotX(int num){
		for(int i=0;i<num;i++){
			int top=face[0];
			face[0]=face[5];
			face[5]=face[3];
			face[3]=face[2];
			face[2]=top;
		}
	}
	
	//y軸正方向にnum回回転
	void rotY(int num){
		for(int i=0;i<num;i++){
			int top=face[0];
			face[0]=face[1];
			face[1]=face[3];
			face[3]=face[4];
			face[4]=top;
		}
	}
	
	
	//下面の値を返す
	int bottom(){return face[3];}
};

int main(){

	int n;
	while(cin>>n,n){
		
		//paint[i]...i番目のサイコロが更新するマスと値
		vector<map<P,int> > paint(n);
		
		//Pを更新出来るサイコロをbit管理
		map<P,int> ow;
		
		for(int i=0;i<n;i++){
			
			//落下地点
			P pos;
			cin>>pos.first>>pos.second;
			
			//サイコロ情報
			int l,r,f,b,d,u;
			cin>>l>>r>>f>>b>>d>>u;
			Dice dice(l,r,f,b,d,u);
			
			//転がり方
			string rot;
			cin>>rot;
			
			//i番目のサイコロは落下地点posを下面の値で更新する
			paint[i][pos]=dice.bottom();
			
			//i番目のサイコロはマスposを更新出来る
			ow[pos]|=(1<<i);
			
			//サイコロを転がし,paintとowを更新する
			//負方向への1回転=正方向への3回転
			for(int j=0;j<rot.size();j++){
				if(rot[j]=='L'){
					pos.first--;
					dice.rotX(3);
				}else if(rot[j]=='R'){
					pos.first++;
					dice.rotX(1);
				}else if(rot[j]=='F'){
					pos.second--;
					dice.rotY(3);
				}else{
					pos.second++;
					dice.rotY(1);
				}
				paint[i][pos]=dice.bottom();
				ow[pos]|=(1<<i);
			}
		}
		
		//dp[サイコロ集合S]=(S内のサイコロを使った時の最大得点)
		//dp[S | {x}] = dp[s]+(Sで更新されないxが更新するマスの値)
		//Sを使った後にサイコロxを使うと考える(?)
		const int N=1<<n;
		vector<long long> dp(N,0);
		
		for(int bit=1;bit<N;bit++){
			for(int i=0;i<n;i++){
				if((bit & 1<<i)==0) continue;
				
				// bit = S | x
				int S=bit ^ 1<<i;
				int x=1<<i;
				long long tmp=dp[S];
				
				for(auto it=ow.begin();it!=ow.end();it++){
					
					//S | xが更新可能なマス
					P pos=it->first;
					
					//posを更新可能なサイコロ情報
					int overwrap=it->second;
					
					//xで更新可能でSで更新不可能な場合
					if( (x & overwrap) && (S & overwrap)==0) tmp+=paint[i][pos];
				}
				
				dp[bit]=max(dp[bit],tmp);
			}
		}
		
		cout<<dp[N-1]<<endl;
		
	}



	return 0;

}