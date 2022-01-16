//.....vector...
#include<bits\stdc++.h>
using namespace std;
template <class T> 
class Vector1{
	vector<T>vec;
	public:
	  void push(T val){
	  	vec.push_back(val);
	  	
	  }
	  T pop(){
	  		T top=vec.back();
	  		vec.pop_back();
	  		return top;
	  }
};

int main(){
/*	Vector1<int> ob1;
	ob1.push(1);
	ob1.push(2);	
	ob1.push(3);
	ob1.push(4);
	ob1.push(5);
	cout<<ob1.pop();*/
		
}
/*void Vector::push(T val){
	vec.push_back(val);
}
T Vector::pop(){
	return vec.pop();
}*/
	
