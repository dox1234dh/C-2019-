#include <iostream>

using namespace std;

int LCD(long a, long b);//UCLN
int GCD (long a,long b);//BCNN


int LCD(long a, long b){
	long c;
	for(int i=1 ; i<=a||i<=b;i++){
		if(a % i == 0 && b % i == 0){
			c=i;
		}
	}
	return c;
}


int GCD(long a, long b){
	long tich=a*b;
	return tich/LCD(a,b);
}


int main(){
	int i,N;
	cin >> N;
	for (i = 0 ; i < N ; ++i){
		long a,b;
		cin >>a>>b;
		cout<< LCD(a,b)<<" "<<endl;
		cout<<GCD(a,b)<<" "<<endl;
	}
	return 0;
}
