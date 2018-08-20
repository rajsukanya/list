#include <iostream>
#include <cstdlib>
#include "ArrayBasedList.h"
using namespace std;

ArrayBasedList::ArrayBasedList()
{
  table_capacity = 100;
  table = new int[table_capacity];
}

ArrayBasedList::~ArrayBasedList()
{
  delete [] table;
}

void ArrayBasedList::insert(int new_position, list_item_type new_item, bool &success)
{
  table[new_position] = new_item;
  num_items++;

  //cout << "insert" <<endl;
}

void ArrayBasedList::retrieve(int position, list_item_type &data_item, bool &success) const
{
  data_item = table[position];
  //cout << "retrieve" <<endl;
}

int ArrayBasedList::find(list_item_type key) const
{
  for(int g = 0; g < num_items; g++)
  {
    if(table[g] == key)
    {
      return g;
    }
  }
  return num_items;
}

void ArrayBasedList::view_rawTable()
{
  cout << "inside view_rawTable" <<endl;
  for(int g = 0; g < table_capacity; g++)
  {
    cout << g << "  " << table[g] <<endl;
  }
}
