#include <iostream>
#include <cstdlib>
#include "ArrayBasedList.h"
using namespace std;

ArrayBasedList::ArrayBasedList()
{
  num_items = 0;
  table_capacity = 131072;
  table = new int[table_capacity];
}

void ArrayBasedList::insert(int new_position, list_item_type new_item, bool &success)
{
  table[new_position] = new_item;
  num_items++;
}

void ArrayBasedList::retrieve(int position, list_item_type &data_item, bool &success) 
{
  data_item = table[position];
}

int ArrayBasedList::find(list_item_type key) 
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
  for(int g = 0; g < table_capacity; g++)
  {
    cout << g << "  " << table[g] <<endl;
  }
}

