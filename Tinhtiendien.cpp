#include<math.h>
#include<iostream.h>
using namespace std;

int main(){
	int n;
	m:
	cout<<"Nhap vao so KW dien tieu thu: ";
	cin>>n;
	if(n<0){
		goto m;
	}else if(n<=100){
		cout<<"So tien dien tieu thu trong thang nay la: "<<n*2000<<" dong"<<endl;
	}else if(101<=n&&n<=200){
		cout<<"So tien dien tieu thu trong thang nay la: "<<n*2500<<" dong"<<endl;
	}else if(201<=n&&n<=300){
		cout<<"So tien dien tieu thu trong thang nay la: "<<n*3000<<" dong"<<endl;
	}else{
		cout<<"So tien dien tieu thu trong thang nay la: "<<n*5000<<" dong"<<endl;
	}
}