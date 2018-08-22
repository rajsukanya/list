#ifndef CACHE_H
#define CACHE_H

#include "list.h"
#include "ArrayBasedList.h"

typedef long int data_item_type;

class Cache
{
  public:
    Cache();
    bool get_status();
    void insert(data_item_type key);
    data_item_type * retrieve(data_item_type key);
    void remove(data_item_type key) const;
  private:
    List list;
    //ArrayBasedList list;
    long int * result;
    bool actual_status;
};

#endif
