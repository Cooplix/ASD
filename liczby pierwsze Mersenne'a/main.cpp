#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

bool isPrime(int);
int wynnik(int);

int main()
{
	cout << "n\t2^n - 1\n";
	
	for(int i = 2; i <= 20; i++) {
		int odp = pow(2, i) - 1;
		if(isPrime(i) && isPrime(odp)) {
			cout << i << "\t"  << wynnik(i) << "\n";
		}
	}
}

bool isPrime(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int wynnik(int p) {
	  return pow(2, p) - 1;
}

