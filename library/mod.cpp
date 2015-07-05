#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long ll;
typedef vector<ll> vec;
typedef vector<vec> mat;

const ll mod=1000000007;

// res=x^n
ll mod_pow(ll x, ll n){
	ll res=0;
	while(n){
		if(n&1) res=(res*x)%mod;
		x=(x*x)%mod;
		n>>=1;
	}
	return res;
}

// AB
mat mat_mul(mat &A,mat &B){
	mat res(A.size(),vec(B[0].size(),0));
	for(int i=0;i<A.size();i++){
		for(int k=0;k<B.size();k++){
			for(int j=0;j<B[0].size();j++){
				res[i][j]=(res[i][j]+A[i][k]*B[k][j])%mod;
			}
		}
	}
	return res;
}

// A^n
mat mat_pow(mat A,ll n){
	mat res(A.size(),vec(A.size()));
	for(int i=0;i<A.size();i++) res[i][i]=1;
	
	while(n>0){
		if(n&1) res=mat_mul(res,A);
		A=mat_mul(A,A);
		n>>=1;
	}
	return res;
}

// xの逆元,x!,x!の逆元
ll inv[10001],fact[10001],invfact[10001];
void get_inv(){
	
	fact[0]=invfact[0]=inv[1]=1;

	for(int i=2;i<10001;i++){
		inv[i]=mod-(mod/i)*inv[mod%i]%mod;
	}

	for(int i=1;i<10001;i++){
		fact[i]=(fact[i-1]*i) % mod;
		invfact[i]=(invfact[i-1]*inv[i]) % mod;
	}
	
}

ll Choose(ll n,ll k)
{
	if (!(0 <= k && k <= n)) return 0;
	return (((fact[n] * invfact[k]) % mod) * invfact[n - k]) % mod;

}
