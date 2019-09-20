#include <iostream>
using namespace std;
int GCD(long a, long b)
{
	if(a==0||b==0)
	return a+b;
	else
	{
		while(a!=b)
		{
			if(a>b) a=a-b;
			else b=b-a;
		}
		return a;
	};
}
int LCM(long a, long b)
{
	return a*b/GCD(a,b);
}
int main()
{
	int t;
	cin >> t;
	long a,b;
	for(int i=0;i<t;++i)
	{
		cin >> a >> b;
		cout << LCM(a,b) << " " << GCD(a,b) << endl;
	}
	return 0;
}
