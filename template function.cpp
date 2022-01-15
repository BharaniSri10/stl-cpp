//..........FUNCTION TEMPLATE.......
// Syntax..
// template<class Ttype>ret_type func_name(parameter){ body of function; }
#include<bits\stdc++.h>
using namespace std;
template<class T>T add(T a,T b){
	T res=a+b;
	return res;
}
int main(){
	cout<<add(2,1)<<endl;
	cout<<add(2.1,1.0)<<endl;
	
}


