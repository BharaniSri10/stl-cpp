//.....class template....
//syntax...
//template<class Ttype> class class_name{ }
// syntax for creating object
// class_name<type> obj;
#include <iostream>  
using namespace std; 
template <class T>
class A{
	public:
		 T x;
		 T y;
	A(T a,T b){
		x=a;
		y=b;
	}
	void display(){
		cout<<"The numbers are "<<x<<" "<<y<<endl;
	}
};
int main(){
	A<int> f1(1,2);
	f1.display();
	
	A<float> f2(1.1,2.2);
	f2.display();
}

