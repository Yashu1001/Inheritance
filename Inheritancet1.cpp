#include<iostream>

using namespace std;

class X{
	public:
		void fun(){
			
			int a,b,c;
			cout<<"Type A= "<<endl;
			cin>>a;
			cout<<"Type B= "<<endl;
			cin>>b;
			cout<<"Type C= "<<endl;
			cin>>c;
			
			cout<<"Value A= "<<a<<endl;
			cout<<"Value B= "<<b<<endl;
			cout<<"Value C= "<<c<<endl<<endl<<endl;
		}	
};
class Y:public X{
	private:
		int a,b,c,sum;
		
	public:
		void setter(){
			
			
			cout<<"Type A= "<<endl;
			cin>>a;
			cout<<"Type B= "<<endl;
			cin>>b;
			cout<<"Type C= "<<endl;
			cin>>c;
			
				sum=a+b+c;
				
	}
	    void getter(){
			
			cout<<"Sum = "<<sum<<endl;
		}	
};


main(){
	
	Y obj;
	
	obj.fun();
	obj.setter();
	obj.getter();	
	
} 			
