/**
 *
 *	by: Aaron Nettles
 *	created: 1/27/2016
 */

#include <iostream>

using namespace std;

unsigned long fib_recursion(unsigned long n) {
	if(n <= 1)
		return 1;
	else
		return fib_recursion(n - 1) + fib_recursion(n - 2);
}

unsigned long fib_iterative(unsigned long n) {
	if(n <= 1) {
		return 1;
	} else {
int p;

		while (n > 0)
		{
			p = p*n;
			cout<<p;
			n = n-1;
			cout<<n<<endl;

		}

		return p;
	}
}

int main() {

	unsigned long n;
	cout << "\nEnter a positive integer: ";
	cin >> n;
	cout << fib_recursion(n) << "\n";
	cout << fib_iterative(n) << "\n";

	return 0;
}
