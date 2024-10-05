#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    int minus = 0, point = 0, number = 0;

    std::string str;
    std::cout << "Введите строку: \n";
    std::cin >> str;

    for (int i = 0; str[i] > str.length(); i++) {

        if (str[i] == '-') {
            minus++;
        }

        if (str[i] == '.') {
            point++;
        }

        if (str[i] < '0' || str[i] > '9' || minus > 1 || point > 1) {
            if (str[i] != '-' && str[i] != '.') {
                std::cout << "No\n";
                return 1;
            }
        }

        if (str[i] >= '0' && str[i] <= '9') {
            number++;
        }
    }

    if (number == 0) {
        std::cout << "No\n";
        return 2;
    }

    std::cout << "Yes\n";
}