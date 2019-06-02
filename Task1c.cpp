#include <iostream>
using namespace std;

void swap1(int a[6],int m ,int n,int x,int y){
	if(a[x]!=m){
		int i;
		for(i=0;a[i]!=m;i++);
		swap(a[x],a[i]);
	}
	if(a[y]!=n){
		int i;
		for(i=0;a[i]!=n;i++);
		swap(a[y],a[i]);
	}
}
int main(){
	//numbers are co-prime
	int a[]={7,8,9,10,16,43};
	int x,y,m,n;
	for(int j=0;j<4;j++){
		cout<<"Enter x and y less than 6"<<endl;
		cin>>x>>y;
		if(x>y){
			int t=x;
			x=y;
			y=t;
		}
		do{
			cout<<"Enter answer"<<endl;
			cin>>equal;
		}while( equal!=56 && equal!=63 && equal!=70 && equal!=112 && equal!=301 && equal!=72 && equal!=80 && equal!=128 && equal!=344 
		&& equal!=90 && equal!=144 && equal!=387 && equal!=160 && equal!=430 && equal!=688 );
		cout<<equal<<endl;
		for(int i=0,foundm=0;i<6;i++){
			if(equal%a[i]==0 && foundm==0){
				m=a[i];
				foundm=1;
			}
			else{
				if(equal%a[i]==0)
					n=a[i];
			}
		}
		swap1(a,m,n,x,y);
	}
	cout<<endl<<"The string is: "<<endl;
	
	for(int i=0;i<6;i++)
		cout<<a[i]<<" ";
}
