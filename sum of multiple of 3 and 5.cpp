#include <iostream>
using namespace std;
int main()
{	
	
	// int x=0,10,100;	wrong initialisation statement
	int x ;

	cin >> x;
	int sum3 = 0;
	int a;
	a = (x - 1) / 3;
	
	//put a*(a-1)/2 and it work
	sum3 = 3 * (a * (a + 1) / 2);
	int sum5 = 0;
	int b;
	b = (x - 1) / 5;
	sum5 = 5 * (b * (b + 1) / 2);
	int c;
	int sum15;
	c = (x - 1) / 15;
	sum15 = 15 * (c * (c + 1) / 2);
	cout << sum3 + sum5 - sum15;
}
