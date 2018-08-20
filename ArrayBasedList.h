#ifndef ARRAY_BASED_LIST_H
#define ARRAY_BASED_LIST_H

#include "list.h"

class ArrayBasedList : public List
{
  public:
    ArrayBasedList();
    ~ArrayBasedList();
    void insert(int new_position, list_item_type new_item, bool &success);
    void retrieve(int position, list_item_type &data_item, bool &success);
    int find(list_item_type key);
    //void view_rawTable();
  private:
    int *table;
    int table_capacity;
};

#endif
