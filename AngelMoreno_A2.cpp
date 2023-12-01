#include <iostream>

int main() {

  float valor1, valor2, suma, resta, multiplicacion,division;

  std::cout << "Primer valor: ";
  std::cin >> valor1;

  std::cout << "Segundo valor: ";
  std::cin >> valor2;

  suma = valor1 + valor2;
  resta = valor1 - valor2;
  multiplicacion = valor1 * valor2;
  division = valor1 / valor2;

  std::cout << "La suma de los valores es: " << suma << std::endl;
  std::cout << "La resta de los valores es: " << resta << std::endl;
  std::cout << "La multiplicación de los valores es: " << multiplicacion << std::endl;
  std::cout << "La división de los valores es: " << division << std::endl;

  return 0;
}
