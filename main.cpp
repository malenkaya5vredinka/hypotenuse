#include <iosteam>
#include "hypotenuse.h"

int main() {
  double a, b;
  std::cout<<"Введите первый катет: ";
  std::cin<<a;
  std::cout<<"Введите второй катет: ";
  std::cin<<b;

  double c = hypotenuse(a, b);
  std::cout << "Гипотенуза: " << c << std::endl;
  return 0;
}
