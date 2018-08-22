#ifndef LIST_H
#define LIST_H

typedef long int list_item_type;

class List
{
  public:
    List();
    ~List();
    bool is_empty();
    int length();
    void insert(int new_position, list_item_type new_item, bool &success);
    void remove(int position, bool &success);
    void retrieve(int position, list_item_type &data_item, bool &success);
    int find(list_item_type key);
    int get_numItems();
    void view_rawTable();
  protected:
    int num_items;
};

#endif
