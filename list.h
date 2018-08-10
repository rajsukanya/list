typedef long int list_item_type;

class List
{
  public:
   List();
   ~List();
   bool is_empty() const;
   int length() const;
   void insert(int new_position, list_item_type new_item, bool &success);
   void remove(int position, bool &success);
   void retrieve(int position, list_item_type &DataItem, bool &success) const;
   bool get_status();
};
