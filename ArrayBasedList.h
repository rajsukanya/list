#ifndef ARRAY_BASED_LIST_H
#define ARRAY_BASED_LIST_H

#include "list.h"

class ArrayBasedList : public List
{
  public:
    ArrayBasedList();
    ~ArrayBasedList();
    void insert(int new_position, list_item_type new_item, bool &success);
    void retrieve(int position, list_item_type &DataItem, bool &success) const;
    int find(list_item_type item) const;
  private:
    int *table;
};

#endif
