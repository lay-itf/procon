#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<list>

using namespace std;

int main(){
    int n,i,j,x;
    cin>>n;
    int ar[5001];
    int sr[100000];
    int max=0;
    for (int i=0;i<5001;i++){
        ar[i]=0;
    }
    list <int> v;
    for (int i=0;i<n;i++){
        cin>>x;
        if (x>max){
            max=x;
        }
        ar[x]++;
    }
    j=max-1;
    v.push_back(max);
    while(j>=1){
        if (ar[j]!=0){
            if (ar[j]==1){
                v.push_back(j);
            }else if(ar[j]>1){
                v.push_back(j);
                v.push_front(j);
            }
        }
        j--;
    }
    cout<<v.size()<<endl;
    list <int>::iterator it;
    it=v.begin();
    while(it!=v.end()){
        cout<<*it<<" ";
        it++;
    }
}