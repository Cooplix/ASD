#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int liczba;
	
	if(liczba < 2) {
		printf("Nie jest pierwsza");
	}
	
	scanf("%d", &liczba);
	
	for(int i = 2; i * i <= liczba; i++) {
		if(liczba % i == 0) {
			printf("Nie jest pierwsza");
			
		} else {
			printf("Liczba: %d jest pierwsza", liczba);
		}
	}
	
	
	return 0;
}
