#include <iostream>
#include "ArrayBasedList.h"
using namespace std;

ArrayBasedList::ArrayBasedList()
{
  table = new int[100];
}

ArrayBasedList::~ArrayBasedList()
{
  delete [] table;
}

void ArrayBasedList::insert(int new_position, list_item_type new_item, bool &success)
{
  table[new_position] = new_item;
  num_items++;
  cout << "insert" <<endl;
}

void ArrayBasedList::retrieve(int position, list_item_type &data_item, bool &success) const
{
  data_item = table[position];
  cout << "retrieve" <<endl;
}

int ArrayBasedList::find(list_item_type item) const
{
  list_item_type key;
  for(int g = 0; g < num_items; g++)
  {
    if(table[g] == key)
    {
      return g;
    }
  }
  return -1;
}
