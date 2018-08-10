#include "list.h"

List::List()
{
  //int size = 0; 
}

List::~List()
{
  //int size = 0;
}

bool List::is_empty() const
{
  /*
  int size;
  return(0 == size);
  */
}

int List::length() const
{  
}

void List::insert(int new_position, list_item_type new_item, bool &success)
{
  /*
  if(N == size)
    success = false; //array is full, cannot insert
  
  else if(position_to_insert < 1 || position_to_insert > size+1)
    success = false; //bad value of position_to_insert
  
  else
  {
    //make room for new item by shifting all items at k >= position_to_start
    //toward the end of the list
    
    for(int k = size-1; k >= position_to_insert-1; k--)
      items[k+1] = Items[k];
      //insert new item
      items[position_to_insert-1] = new_item;
      size++;
      success = true;
  }
  */
}

void List::remove(int position, bool &success)
{
  /*
  if(0 == size)
    success = false; //array is empty
  
  else if(position < 1 || position > size)
    success = false; //bad position
  
  else
  {
    //shift all items at positions position down by 1 toward the end of the list. In this loop, k is the index of the target of the move, not the source
    
    for(int k = position-1; k <= size-2; k++)
      items[k] = items[k+1];
    size--;
    success = true;
  }
  */
}

void List::retrieve(int position, list_item_type &DataItem, bool &success) const
{
  /*
  success = (1 <= position && position <= size);
  if(success)
  {
    item = items[position - 1];
  }
  */
}

bool List::get_status()
{
}
