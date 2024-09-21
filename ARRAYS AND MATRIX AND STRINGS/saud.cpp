#include<iostream>
using namespace std;
class test{
	private:
		int n;
		public:
		void in(){
			cout<<"enter the number"<<endl;
			cin>>n;
			
		}
		void out(){
			cout<<"the number is"<<n<<endl;
		}
	};
		int main(){
			test obj;
			obj.in();
			obj.out();
			return 0;
		}
//		return 0;
