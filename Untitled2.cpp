#include <iostream>

int dodaj(int a, int b) {
    return a+b;
}


int odejmij(int a, int b){
    return a-b;
}

int mnozenie(int a, int b){
    return a*b;
}

int main()
{
    std::cout << "Wiosna" << std::endl;
    std::cout << "Lato\n";

    int wybor, a, b;
    std::cout << "1. Dodaj\n2.Odejmij\n3.Mnozenie\n4.Dzielenie\n";
    std::cout << "Podaj wybor: "; std::cin >> wybor;
    std::cout << "podaj liczbe a: "; std::cin >> a;
    std::cout << "podaj liczbe b: "; std::cin >> b;

    switch(wybor) {
    case 1:
        std::cout << dodaj(a,b);
        break;
    case 2:
        std::cout << odejmij(a,b);
        break;
    case 3:
        std::cout << mnozenie(a,b);
        break;
    case 4:
        break;
    }

    return 0;
}
