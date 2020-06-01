#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t,ans=0,d=0,a=0,b=0,c=0;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		a = 0;
        b = 0;
		for(char& it:s)
		{
			a += (it == '0');
			b += (it == '1');
		}
		ans = min(a, b);
		c = 0;
        d = 0;
		for(char &it:s)
		{
			c += (it == '0'), a -= (it == '0');
			d += (it == '1'), b -= (it == '1');
			ans = min(ans, d + a);
			ans = min(ans, c + b);
		}
		printf("%d \n",ans);
	}
	return 0;
}