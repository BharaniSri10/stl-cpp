//.....FUNCTION TEMPLATE WITH MULTIPLE PARAMETER....
//Syntax..
 //template<class T1,class T2,class T3..> ret_type funct_name(parameter){};
 #include<bits\stdc++.h>
using namespace std;
template<class T1,class T2,class T3>void fun(T1 x,T2 y,T3 z){
	cout<<"The numbers are "<<x<<" "<<y
<<" "<<z;}
int main(){
	fun(5,5.1,5.236);
}
