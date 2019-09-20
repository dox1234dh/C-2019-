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
int LCMofarray(int n)
{
	int a=n;
	int c=LCM(a,a-1);
	for(int i=0;i<n-2;++i)
	{
		c=LCM(c,a-2);
		a--;
	};
	return c;
}
int main()
{
	int t;
	cin >> t;
	int n;
	for(int i=0;i<t;++i)
	{
		cin >> n;
		cout << LCMofarray(n) << endl;
	}
	return 0;
}
