#include<iostream.h>
using namespace std;

int main(){
	int n;
	m:
	cout<<"Nhap thu trong tuan: ";
	cin>>n;
	if(n==1){
		cout<<"1: Sunday"<<endl;
	
	}else if(n==2){
		cout<<"2: Monday"<<endl;

	}else if(n==3){
		cout<<"3: Tuesday"<<endl;
	
	}else if(n==4){
		cout<<"4: Wednesday"<<endl;
	
	}else if(n==5){
		cout<<"5: Thursday"<<endl;
		
	}else if(n==6){
		cout<<"1: Friday"<<endl;
		
	}else if(n==7){
		cout<<"1: Saturday"<<endl;
	
	}else{
		goto m;
	}
}