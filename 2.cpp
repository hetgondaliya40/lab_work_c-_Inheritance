/*2. WAP to perform four different number’s sum by
inheriting constructors in hybrid inheritance.*/

#include<iostream>

using namespace std;

class A{
	public :
	int a;
	public :
	void a1(){
		cout<<"ENTER 1"<<endl;
		cin>>a;
			}
};

class B : public A
{
	public :
	int b;
	public :
	void a2(){
		cout<<"ENTER 2"<<endl;
		cin>>b;
			}
};
class C : public A
{
	public :
	int c;
	public :
	void a3(){
		cout<<"ENTER 3"<<endl;
		cin>>c;
			}
};
class D : public B,public C
{
	public :
	int u,sum=0;
	public :
	void a4(){
		cout<<"ENTER 4"<<endl;
		cin>>u;	
			}

};
int main(){
	int sum=0;
	D d;
	d.B::a1();
	d.a2();
	d.a3();
	d.a4();
	sum=d.B::a+d.b+d.c+d.u;
	cout<<"SUM = "<<sum<<endl;
				

	return 0;
}
