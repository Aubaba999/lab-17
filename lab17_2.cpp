#include<iostream>
using namespace std;

void myString(char *&x,int N){
	x = new char[N+1];    
	for(int i = 0; i < N;i++){
	    x[i]= 'A'+i; 
	} 
	x[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
