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

int main(){

	vector<long long> num(5000001,0);
	vector<long long> x(5000001,0);
	for(long i=0;i<5000001;i++) x[i]=i;	
	
	for(long i=2;i<5000001;i++){
		if(x[i]>1){
			for(long j=1;i*j<5000001;j++){
				while(x[i*j]%i==0){
					x[i*j]/=i;
					num[i*j]++;
				}
			}
		}
	}
	
	for(long i=2;i<5000001;i++) num[i]+=num[i-1];

	//for(int i=2;i<10;i++) cout<<i<<" "<<num[i]<<endl;
	
	long long T;
	cin>>T;
	
	for(long long t=0;t<T;t++){
		long long a,b;
		scanf("%I64d%I64d",&a,&b);
		printf("%I64d\n",num[a]-num[b]);
	}
	
	return 0;

}