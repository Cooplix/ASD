#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool liczbaArmstronga(int);
int iloscCyfr(int);


int main(int argc, char** argv) {
	
	for(int i = 100; i < 1000000000; i++) {
		if(liczbaArmstronga(i) == true) {
			printf("%d\n", i);
		}
	}
	
		
	return 0;
}
int iloscCyfr(int liczba) {
	int potenga = 0;
	while(liczba) {
		liczba = liczba / 10;
		potenga++;
	}
	return potenga;
}


bool liczbaArmstronga(int liczba) {
	int result = 0;
	int origin = liczba;
	
	while(liczba != 0) {
		int digit = liczba % 10;
		
		result = result + pow(digit, iloscCyfr(liczba));
		liczba = liczba / 10;
	}
	
	if(origin == result) {
		return true;
	}
	return false;
}

