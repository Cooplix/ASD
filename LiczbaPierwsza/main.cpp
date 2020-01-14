#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool pierwsza(int);

int main(int argc, char** argv) {
    int liczba;
    std::cin >> liczba;

    if(pierwsza(liczba)) {
        std::cout << liczba << " jest pierwsza";
    }
    else
        std::cout << liczba << " nie jest pierwsza";

    return 0;
}

bool pierwsza(int liczba) {
    if(liczba < 2) {
        return false;
    }

    for(int i = 2; i * i <= liczba; i++) {
        if(liczba % i == 0)
            return false;

        return true;
    }
}