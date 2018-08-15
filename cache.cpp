#include "list.h"
#include "cache.h"
#include <iostream>
using namespace std;

bool Cache::get_status()
{
  return false;
}

void Cache::insert(data_item_type key)
{
  cout << "Insert" <<endl;
}

data_item_type* Cache::retrieve(data_item_type key)
{
  cout << "Retrieve" <<endl;
}

void Cache::remove(data_item_type key)
{
  cout << "Remove" <<endl;
}
