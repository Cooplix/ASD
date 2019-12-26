#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void chekPerfectNumber();
int Euklid(int);
bool isPrime(int);

int main(int argc, char *argv[]) {
	chekPerfectNumber();
	return 0;
}

void chekPerfectNumber() {
	long long int N;
	for(int i = 1; i < 17; i++) {
		if(isPrime(Euklid(i)) == true) {
			N = Euklid(i) * pow(2, i-1);
			printf("%d\n", N);
		}
	}
	
}


int Euklid(int n) {
	return pow(2,n) - 1;
}

bool isPrime(int E) {
	for(int i = 2; i <= sqrt(E); i++)
		if(E % i == 0)
			return false;
			
	return true;
}



