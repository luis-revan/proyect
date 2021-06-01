// // "- Crear Github
// //     - Hacer el bogosort - Encapsular el arreglo en una clase individuo - Class Fitness para verificar qué tan ordenado está - Crear una pieza de arte(Framework) "
// // C++ implementation of Bogo Sort
#include <iostream>
#include <vector>
#include "../classes/Individual.cpp"
using namespace std;
int main(int argc, char const *argv[])
{
  vector<int> array = {1, 2, 5, 4};
  vector<int> array2 = {1, 2, 5, 3};
  Individual<int> id_01(array);
  cout << "Test 1" << endl;
  cout << "Intancia de la clase 'Entity' -> con mismos arreglos: " << endl;
  if (id_01.getArray() == array)
    cout << "Correct" << endl;
  else
    cout << "Incorrect" << endl;

  cout << "Test 2" << endl;
  cout << "Intancia de la clase 'Entity' -> con mismos diferentes: " << endl;
  if (id_01.getArray() == array2)
    cout << "Incorrect" << endl;
  else
    cout << "Correct" << endl;

  cout << "Test 2" << endl;
  cout << "Esta ordenado el arreglo:" << endl;
  (id_01.is_sorted())
      ? cout << "Correct" << endl
      : cout << "Incorrect" << endl;

  //   .print();

  // id_01.is_sorted()
  //     ? cout << "Si\n"
  //     : cout << "No\n";

  // id_01.bogo_sort();
  // id_01.print();
  return 0;
}