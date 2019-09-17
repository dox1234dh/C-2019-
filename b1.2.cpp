#include <iostream>
using namespace std;

long lcdOfArray(int n);

long lcdOfArray(int n){
	int i,j;
	int tich=1,k,h;
	h=n;
	while(h!=0){
		tich*=h;
		h--;
	}
//	cout<< tich;
	for(j=n;j<=tich;++j){
		int kt=1;
		for(int i=1;i<=n;++i)
		{	
			if(j%i==0){}
			else kt=0;
		}
		if(kt==1)
		{
			k=j;
			j=tich+1;
		}
	}
	return k;
}
int main(){
	int t;//bo test
	int n;
	cin>>t;
	for (int m=0;m<t;++m){
		
		cin>>n;
		cout<<lcdOfArray(n)<<endl;
	}
	return 0;
}
