#include <iostream>
#include <vector>
#include "Car.hpp"
#include "Fruit.hpp"
#include "Forest.hpp"

using namespace std;

int main(){
  Forest las;
  las.AddTree(3, 3, 5, '*', "green");
  las.AddTree(5, 15, 8, '#', "bgreen");
  las.AddTree(7, 5, 7, '#', "red"); 
  las.printTab();

}