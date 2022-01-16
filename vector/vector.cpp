///.....VECTOR.....
#include<bits\stdc++.h>
using namespace std;
template<class t> void display(vector<t> a){
	for(int i=0;i<a.size();i++){
		cout<<a[i];
	}
}
int main(){
	vector<int> res;
	res.push_back(0);
	res.push_back(1);
	res.push_back(2);
	res.push_back(3);
	display(res);
}
