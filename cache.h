typedef long int data_item_type;

class Cache
{
  public:
    Cache();
    ~Cache();
    bool get_status();
    void insert(data_item_type key);
    data_item_type* retrieve(data_item_type key);
    void remove(data_item_type key);
  private:
    int num_items;
};
