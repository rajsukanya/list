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
  return actual_status;
}

void Cache::insert(data_item_type key)
{
  bool success;
  num_items = list.get_numItems();
  int pos = list.find(key);
  cout << "POS >> " << pos <<endl;
  if(pos == num_items)
  {
    list.insert(num_items, key, success);
    actual_status = true;
  }
  else
  {
    actual_status = false;
  }
  cout << "NUM_ITEMS: " << num_items <<endl;
  cout << "INSERT ACTUAL_STATUS: " << actual_status <<endl;
  //cout << "Insert" <<endl;
}

data_item_type* Cache::retrieve(data_item_type key) 
{
  bool success;
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
  //cout << "RETRIEVE ACTUAL_STATUS: " << actual_status <<endl;
  //cout << "Retrieve" <<endl;
}

void Cache::remove(data_item_type key) const
{
  cout << "Remove" <<endl;
}
