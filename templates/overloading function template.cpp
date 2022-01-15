//.....overloading function template....
#include <iostream>  
using namespace std;  
template<class X>void fun(X a){
	cout<<"The number is "<<a<<endl;
}
template<class X,class Y>void fun(X a,Y b){
		cout<<"The numbers are "<<a<<" "<<b<<endl;
}
int main(){
	fun(5);
	fun(2,3.2);
}
