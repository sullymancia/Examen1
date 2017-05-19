#include "Test.h"
#include <iostream>
#include <map>
using namespace std;

bool exists(vector<int> avl_tree, int number)
{
    int posicion = 0;

    if(posicion < 0 || posicion >= avl_tree.size() )
        return false;

    if(avl_tree[posicion] == number)
        return true;

    if(avl_tree[posicion] < number)
    {
      posicion = posicion * 2 + 2;
    }
    else
    {
      posicion = posicion * 2 + 1;
    }

        return false;
}

BinaryNode* convertToLinkedTree(vector<int> max_heap)
{
    int padre = 0;
    int der = 0;
    int izq = 0;

  return NULL;
}

int main ()
{
  test();
  return 0;
}






