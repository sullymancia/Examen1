#include "Map.h"
#include <iostream>

using namespace std;

Map::Map()
{
    int i;
    for(i = 0; i < 999999; i++){
            array.push_back(new pair<string,int>(NULL,0));
}

}

int Map::hash(string str)
{
  int sum = 0;

  for(int i=0;i < (int)str.length();i++)
  {
    sum+=str[i];
  }

  return sum;
}

void Map::put(string key, int value)
{
     int posicion = hash(key);

  if(array[posicion]->first != NULL)
  {
    array[posicion]->second = value;
  }

  else
  {
    array[posicion]->first = key;
}

int Map::get(string key)
{

  }

  return -1;
}


