#include <iostream>
using namespace std;
int main (){
	int r,x,y; 
	long int n;
	cout<<"Enter the number of days being considered"<<endl;
	cin>>n;
	do{
		cout<<"Enter the intial rating"<<endl;
		cin>>r;
	}while(!(r>=1 && r<=3000));
	do{
		cout<<"Enter the increase in rating on a good performance"<<endl;
		cin>>x;
		}while(!(x>=1 && x<=100));
	do{
		cout<<"Enter the decrease in rating on a bad performance"<<endl;
		cin>>y;
	}while(!(y>=1 && y<=100));	
	
	
	int maxa=14;
	int maxb=14;
	int *a=new int[maxa];
	int *b=new int[maxb];
	int na=0;
	int nb=0;
	cout<<"Use only 0 or 1"<<endl;
	while (cin >> a[na]) {
    	if(a[na]!=0 && a[na]!=1){
			na++;
    		if (na >= maxa) {
        		maxa = maxa * 2;            // double the previous size
        		int* temp = new int[maxa]; // create new bigger array.
        		for (int i=0; i<na; i++) {
           		 temp[i] = a[i];       // copy values to new array.
        		}
       	 		delete [] a;              // free old array memory.
        		a = temp;                 // now a points to new array.
    		}
		}
	}
	cout<<"Use only 0 or 1"<<endl;
	while (cin >> b[nb]) {
    	if(b[nb]!=0 && b[nb]!=1){
			nb++;
    		if (nb >= maxb) {
        		maxb = maxb * 2;            // double the previous size
        		int* temp = new int[maxb]; // create new bigger array.
        		for (int i=0; i<nb; i++) {
           		 temp[i] = b[i];       // copy values to new array.
        		}
       	 		delete [] b;              // free old array memory.
        		b= temp;                 // now a points to new array.
    		}
		}
	}
	
	
	for(int i=0;i<n;i++){
		if(a[i]==1 && b[i]==1){
			r=r+x;
		}
		else if(a[i]==1 && b[i]==0){
			r=r-y;
		}
		else;
	}
	cout<<r<<endl;
}
