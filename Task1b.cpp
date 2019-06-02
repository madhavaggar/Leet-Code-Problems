#include<iostream>
using namespace std;

int midcut(char a[1000000],int size){
	int n=size/2;
	int found=1;
	int count=0;
	for(;n>=1 && found==1;){
		for(int i=0;i<n && found==1;i++){
			if(a[i]!=a[n+i]){
				found=0;	
			}
		}
		if(found==1)
			count++;
		n=n/2;
	}	
	return count;
}

int main (){
	char a[1000000];
	int n;
	do{
		cout<<"Enter size in power of 2"<<endl;
		cin>>n;
	}while(!((n != 0) && ((n & (n - 1)) == 0)));
	
	for(int i=0;i<n;i++){
		do{
			cout<<"Enter lower-case alphabet"<<endl;
			cin>>a[i];
		}while(!(a[i]>='a' && a[i]<='z'));
	}
	cout<<midcut(a,n)<<endl;
	
}
