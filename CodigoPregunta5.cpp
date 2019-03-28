#include <iostream>
using namespace std;

int main(){
	int x=0;
	int n = 21;
	while(n != 1)
	{
	if( n % 2 == 0)
	{
	n = n / 2;
	}
	else
	{
	n = 3 * n + 1;
	}
	x = x + 1;
	}
	cout << x << endl;
	return 0;
}
