  #include<iostream>
  #include<conio.h>
  #include<math.h>
  using namespace std;
float fac(int n);
int main(){
	int denominator;
	cout<<"enter the value of the denominator "<<endl;
	cin>>denominator;
	int term;
	int sum=1;
	for(int j=1;j<=denominator;j++){
		term =1.0/fac(denominator);
		sum=sum+term;
		
		
	}
	cout<<"sum is"<<sum<<endl;
	return 0;
	
	}
	float fac(int n){
		int i,fac;
		int pod=1;
		for(i=1;i<=n;i++){
		pod = pod*i;
		getch();
		}
	}