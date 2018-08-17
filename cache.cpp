#include "list.h"
#include "cache.h"
#include <iostream>
using namespace std;

Cache::Cache()
{
  list = ArrayBasedList();
  num_items = 0;
}

Cache::~Cache()
{
  delete &list;
}

bool Cache::get_status()
{
  bool actual_status;
  return actual_status;
}

void Cache::insert(data_item_type key)
{
  bool success, actual_status;
  int pos = list.find(key);
  if(pos == -1)
  {
    list.insert(num_items, key, success);
    actual_status = true;
    num_items++;
  } 
  else 
  {
    actual_status = false;
  }
  cout << "Insert" <<endl;
}

data_item_type* Cache::retrieve(data_item_type key) const
{
  bool success, actual_status;
  int pos = list.find(key);
  if(pos >= 0)
  {
    data_item_type *result;
    list.retrieve(pos, *result, success);
    actual_status = true;
    return result;
  } 
  else 
  {
    actual_status = false;
    return NULL;
  }
  cout << "Retrieve" <<endl;
}

void Cache::remove(data_item_type key) const
{
  cout << "Remove" <<endl;
}
