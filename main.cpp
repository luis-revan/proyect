// // "- Crear Github
// //     - Hacer el bogosort - Encapsular el arreglo en una clase individuo - Class Fitness para verificar qué tan ordenado está - Crear una pieza de arte(Framework) "
// // C++ implementation of Bogo Sort
#include <iostream>
#include <vector>
#include "./classes/Individual.cpp"

int main(int argc, char const *argv[])
{
  std::vector<int> array = {1, 2, 5, 4};
  Individual<int> id_01(array);
  id_01.bogo_sort();
  return 0;
}