#include "list.h"
#include "cache.h"
#include <iostream>
using namespace std;

Cache::Cache()
{
  list = ArrayBasedList();
  result = new long int;
}

bool Cache::get_status()
{
  return actual_status;
}

void Cache::insert(data_item_type key)
{
  bool success;
  int num_items = list.get_numItems();
  if(list.find(key) == num_items)
  {
    list.insert(num_items, key, success);
    actual_status = true;
  }
  else
  {
    actual_status = false;
  }
}

data_item_type* Cache::retrieve(data_item_type key) 
{
  bool success;
  int pos = list.find(key);
  int num_items = list.get_numItems();

  if(pos < num_items) 
  {
    list.retrieve(pos, *result, success);
    actual_status = true;
    return result;
  }
  else
  {
    actual_status = false;
    return NULL;
  }
}

void Cache::remove(data_item_type key) const
{
  cout << "Remove" <<endl;
}
