#include <iostream>
using namespace std;
#include <math.h>

char* tobin(int n,int size){
	char a[106]=" ";
	int i;
	for(i=0;i<size;i++){
		if(n%2==1){
			a[size-i-1]='1';
		}
		else{
			a[size-i-1]='0';
		}
		n=n/2;	
	}
	a[i]='\0';
	return a;
}
int main (){
	char a[106];
	int n,found=-1;
	cout<<"Enter the string length"<<endl;
	cin>>n;
	cout<<"Enter the string"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]!='1' && a[i]!='0'){
			cout<<"Enter either 0 or 1"<<endl;
			cin>>a[i];
		}
	}
	int b=0;
	for(int i=n-1;i>=0;i--){
		if(a[i]=='1')
			b=pow(2,n-i-1)*1+b; 
	}
	if(b==pow(2,n-1) || b==(pow(2,n)-1) || b==(pow(2,n-1)+1)){
		cout<<"-1";
	}
	else{
		cout<<tobin(b-1,n)<<"\t";
		cout<<tobin(b+1,n)<<endl;
	}
}
