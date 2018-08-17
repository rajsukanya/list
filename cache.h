#ifndef CACHE_H
#define CACHE_H

#include "list.h"
#include "ArrayBasedList.h"

typedef long int data_item_type;

class Cache
{
  public:
    Cache();
    ~Cache();
    bool get_status();
    void insert(data_item_type key);
    data_item_type * retrieve(data_item_type key) const;
    void remove(data_item_type key) const;
  private:
    int num_items;
    List list;
};

#endif
