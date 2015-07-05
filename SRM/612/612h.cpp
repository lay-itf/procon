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

class PowersOfTwo
{
public:
	long long count(vector<long long> powers){

		set<long long> nums1,nums2,nums3,nums4,nums;

		const int tmp=powers.size()/2;
		const int tmp2=powers.size()-tmp;

		const int size1=tmp/2;
		const int size2=tmp-size1;
		const int size3=tmp2/2;
		const int size4=tmp2-size3;

		const long long p1=pow(2.0,size1);
		const long long p2=pow(2.0,size2);
		const long long p3=pow(2.0,size3);
		const long long p4=pow(2.0,size4);

		for(long long i=0;i<p1;i++){
			long long index=i,num=0;
			for(int j=0;j<size1;j++){
				if(index%2==1) num+=powers[j];
				index/=2;
			}
			nums1.insert(num);
		}

		for(long long i=0;i<p2;i++){
			long long index=i,num=0;
			for(int j=0;j<size2;j++){
				if(index%2==1) num+=powers[j+size1];
				index/=2;
			}
			nums2.insert(num);
		}

		for(long long i=0;i<p3;i++){
			long long index=i,num=0;
			for(int j=0;j<size3;j++){
				if(index%2==1) num+=powers[j+size1+size2];
				index/=2;
			}
			nums3.insert(num);
		}

		for(long long i=0;i<p4;i++){
			long long index=i,num=0;
			for(int j=0;j<size4;j++){
				if(index%2==1) num+=powers[j+size1+size2+size3];
				index/=2;
			}
			nums4.insert(num);
		}

		set<long long> num12,num34;

		set<long long>::iterator it = nums1.begin();
		set<long long>::iterator it2 = nums2.begin();

		for(long long i=0;i<nums1.size();i++){
			it2 = nums2.begin();
			for(long long j=0;j<nums2.size();j++){
				num12.insert((*it)+(*it2));
				it2++;
			}
			it++;
		}

		it = nums3.begin();
		it2 = nums4.begin();

		for(long long i=0;i<nums3.size();i++){
			it2 = nums4.begin();
			for(long long j=0;j<nums4.size();j++){
				num34.insert((*it)+(*it2));
				it2++;
			}
			it++;
		}

		it = num12.begin();
		it2 = num34.begin();

		for(long long i=0;i<num12.size();i++){
			it2 = num34.begin();
			for(long long j=0;j<num34.size();j++){
				nums.insert((*it)+(*it2));
				it2++;
			}
			it++;
		}		

		return nums.size();

	}
};
