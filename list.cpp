#include <iostream>
#include <cstdlib>
#include "list.h"
using namespace std;

List::List()
{
}

List::~List()
{
}

bool List::is_empty()
{
  cout << "is_empty not implemented" <<endl;
  exit(1);
}

int List::length()
{  
  cout << "length not implemented" <<endl;
  exit(1);
}

void List::insert(int new_position, list_item_type new_item, bool &success)
{
  cout << "insert not implemented" <<endl;
  exit(1);
}

void List::remove(int position, bool &success)
{
  cout << "remove not implemented" <<endl;
  exit(1);
}

void List::retrieve(int position, list_item_type &data_item, bool &success)
{
  cout << "retrieve not implemented" <<endl;
  exit(1);
}

int List::find(list_item_type key)
{
  cout << "List find not implemented" <<endl;
  exit(1);
}

int List::get_numItems()
{
  return num_items;
}

void List::view_rawTable()
{
  cout << "view_rawTable not implemented" <<endl;
  exit(1);
}
