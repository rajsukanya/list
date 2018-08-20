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

bool List::is_empty() const
{
  cout << "is_empty not implemented" <<endl;
  exit(1);
}

int List::length() const
{  
  cout << "length not implemented" <<endl;
  exit(1);
}

void List::insert(int new_position, list_item_type new_item, bool &success) const
{
  cout << "insert not implemented" <<endl;
  exit(1);
}

void List::remove(int position, bool &success) const
{
  cout << "remove not implemented" <<endl;
  exit(1);
}

void List::retrieve(int position, list_item_type &DataItem, bool &success) const
{
  cout << "retrieve not implemented" <<endl;
  exit(1);
}

int List::find(list_item_type key) const
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
