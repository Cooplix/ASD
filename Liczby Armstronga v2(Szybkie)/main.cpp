#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS        14

//https://acmp.ru/article.asp?id_text=198 - rozwiązanie znalazłem tutaj

void find(int maxVal);

int main(int argc, char *argv[])
{
    int maxVal = 912985155;
    find(maxVal);
}


void find(int maxVal)
{
    int digits[MAX_DIGITS] = {0};
    int length             = 1;
    int sum                = 0;
    int diffCache[10][MAX_DIGITS];

    {
        int powerValues[10] = {0,1,2,3,4,5,6,7,8,9};
        for (int j = 1; j < MAX_DIGITS; j++) {
            diffCache[0][j] = -powerValues[9];
            for (int i = 1; i < 10; i++)
                diffCache[i][j] = powerValues[i] - powerValues[i-1];

            for (int i = 1; i < 10; i++)
                powerValues[i] *= i;
        }
    }


    for (int num = 0; num <= maxVal; num++) {
        if (num == sum)
            printf("%d\n", num);

        int i = 0;
        while (1) {
            if (++digits[i] == 10) {
                digits[i] = 0;
                sum += diffCache[0][length];
                if (++i == length) {
                    length++;
                }
                continue;
            }
            sum += diffCache[digits[i]][length];
            break;
        }
    }
}