#include<iostream>
using namespace std;
class circle{
	private:
		int radious;
		public:
			void getradious(int r){
				radious=r;
			}
			void area(){
				cout<<"the area is"<<3.14*radious*radious<<endl;
			}
			void circumference(){
				cout<<"the circumfernce of the circle"<<2*3.14*radious<<endl;
			}
};
int main(){
	circle c1;
	int rad;
	cout<<"enter the radius"<<endl;
	cin>>rad;
	c1.getradious(rad);
	c1.area();
	c1.circumference();
}