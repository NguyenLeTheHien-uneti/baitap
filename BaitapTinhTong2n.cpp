#include<iostream.h>
#include<math.h>
using namespace std;

int main(){
	int n;
	long s=1;
	cout<<"Nhap so: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		
		s=s*i*2;
	}
	cout<<"ket qua cua phep tinh 2*4*6*..*2n la: "<<s<<endl;
}