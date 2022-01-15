//.....class template....
//syntax...
//template<class Ttype> class class_name{ }
// syntax for creating object
// class_name<type> obj;
#include <iostream>  
using namespace std; 
template <class T1,class T2>
class A{
	public:
		 T1 x;
		 T2 y;
	A(T1 a,T2 b){
		x=a;
		y=b;
	}
	void display(){
		cout<<"The numbers are "<<x<<" "<<y<<endl;
	}
};
int main(){
	A<int,float> f1(1,2.1);
	f1.display();
	
	A<float,float> f2(1.1,2.2);
	f2.display();
}

