#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool liczbaArmstronga(int);
int iloscCyfr(int);
unsigned my_pow(unsigned, unsigned);

int main()
{
    int figure = 0, summa = 0;
    double n = 10;
    int  i, a, b, st;

    for ( i = 100; i < 1000000000; i++)
    {
        a = b = i;
        while(a)
        {
            a /= 10;
            figure++;
        }
        st = my_pow(n, figure-1);
        while(b)
        {
            summa += my_pow((double)(b / st), figure);
            b %= st;
            st /= 10;
        }

        if(summa == i)
            std::cout << i << "  Armstrong number " << std::endl;
        figure = 0;
        summa = 0;
    }
}

unsigned my_pow(unsigned a, unsigned b) {
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    unsigned p = my_pow(a, b / 2);
    return b % 2 == 0 ? p * p : p * p * a;
}