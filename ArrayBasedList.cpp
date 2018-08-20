#include <iostream>
#include <cstdlib>
#include "ArrayBasedList.h"
using namespace std;

ArrayBasedList::ArrayBasedList()
{
  num_items = 0;
  table_capacity = 100;
  table = new int[table_capacity];
}

ArrayBasedList::~ArrayBasedList()
{
  delete [] table;
}

void ArrayBasedList::insert(int new_position, list_item_type new_item, bool &success)
{
  //cout << "inside insert" <<endl;
  table[new_position] = new_item;
  num_items++;
  //cout << "subclass insert num items : " << num_items <<endl;
}

void ArrayBasedList::retrieve(int position, list_item_type &data_item, bool &success) 
{
  cout << "inside retrieve" <<endl;
  data_item = table[position];
  num_items++;
}

int ArrayBasedList::find(list_item_type key) 
{
  cout << "Inside find" <<endl;
  //cout << "Num_items in find: " << num_items <<endl;
  for(int g = 0; g < num_items; g++)
  {
    if(table[g] == key)
    {
      return g;
    }
  }
  return num_items;
}
/*
void ArrayBasedList::view_rawTable()
{
  cout << "inside view_rawTable" <<endl;
  for(int g = 0; g < table_capacity; g++)
  {
    cout << g << "  " << table[g] <<endl;
  }
}
*/
