#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    int sito[100] = {0};

    for(int i = 2; i * i < 100; i++) {
        if(sito[i] == 0){
            for(int j = i*i; j < 100; j = j + i) {
                sito[j] = 1;
            }
        }
    }


    for(int i = 2; i < 100; i++) {
        if(sito[i] == 0)
            std::cout << i << " ";

    }



    return 0;
}
