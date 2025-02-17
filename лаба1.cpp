#include <iostream>

int countbits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "RU");
    int num;
    std::cout << "Введите десятичное число: ";
    std::cin >> num;

    int bits = countbits(num);
    std::cout << "Количество единиц в двоичном представлении: " << bits << std::endl;
    return 0;
}