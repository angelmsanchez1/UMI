#include <stdio.h>
#include <iostream>
int main()
{
int edad;
std::cout << "Edad: ";
std::cin >> edad;
if (edad >= 18) {
    std::cout << "¡Vaya! Eres mayor de edad.\n";
} else {
    std::cout << "¡Oh! Eres menor de edad.\n";
}
    return 0;
}
