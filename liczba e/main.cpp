
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;
double E(double);



int main() {
    cout << "Podaj dokladnosc";
    double esp;
    std::cin >> esp;
    cout << setprecision(esp + 1) << E(esp);

    return 0;
}


double E(double  eps) {
    //formula
    //e = lim x -> nieskończoność  (1 + (1/ x))^x
    //https://ru.wikipedia.org/wiki/%D0%97%D0%B0%D0%BC%D0%B5%D1%87%D0%B0%D1%82%D0%B5%D0%BB%D1%8C%D0%BD%D1%8B%D0%B5_%D0%BF%D1%80%D0%B5%D0%B4%D0%B5%D0%BB%D1%8B
    double temp;
    double odp;
    temp = 1+(1/eps);
    odp = pow(temp, eps);

    return odp;
}
