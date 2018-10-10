#include<iostream>
using namespace std;
class add{
	private:
		int a,b;
	public:
		add(){
			cin>>a>>b;
		}
		~add(){
			cout<<"Destrcutor=>"<<a+b<<endl;
		}
		void display(){
			cout<<a+b<<endl;
		}
};
int main(){
	add *yash=new add();
	delete yash;
	return 0;
}
