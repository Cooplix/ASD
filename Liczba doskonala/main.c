#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void chekPerfectNumber();


int main(int argc, char *argv[]) {
	chekPerfectNumber();
	return 0;
}

void chekPerfectNumber() {
	int s, l;
	for(int i = 2; i < 1000000000; i++) {
		s = 0;
		for(int j = 1; j < i; j++)
			if(i%j == 0) {
			s += j;
		}
				
		if(s == i) {
		printf("%d\n", i);
		}
				
	}
}



