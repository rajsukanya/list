#include <iostream>
#include <fstream>
#include <cstdlib>
#include "list.h"
#include "memo_batch_tester.h"
using namespace std;

#define READ 0
#define WRITE 1
#define DELETE 2

int memo_batch_tester(int argc, char *argv[])
{
  ifstream inStream;
  string line, tag, filename;
  list_item_type new_item;
  bool success, actual;
  int position, new_position, DataItem;
  int i, value, numError = 0;
  int op[value], key[value], t;
  bool expected_status[value];

  /*================================================================================*/
  /*  Task 1: Deal with command line parameters  */
  
  /* for now just this, but later this section gets more complicated */
  filename = argv[1];
  
  /*  Task 1 is done!  */
  /*================================================================================*/
  /*  Task 2 read data from file  */
 
  inStream.open(filename.c_str());
  if(inStream.fail())
  {
    cout << "Failed to open file" <<endl;
    exit(1);
  }
  
  while(getline(inStream, line))
  {
    inStream >> tag >> value;
    
    if(tag == "NUM_OPERATIONS")
    {
      for(i = 0; i < value; i++)
      {
        inStream >> op[i] >> key[i] >> t;
       
        if(t == 1)
        {
          expected_status[i] = true;
        }
        else
        {
          expected_status[i] = false;
        }
        //cout << expected_status[i] <<endl;
      }
    }
  }
  inStream.close();
  
  /*  Task 2 is done! */
  /*================================================================================*/
  /*  Task 3 perform operations and check for errors */
  for(i = 0; i < value; i++)
  {
    switch(op[i])
    {
      case READ:
        //retrieve(position, DataItem, success);
        break;
      case WRITE: 
        //insert(new_position, new_item, success);
        break;
      case DELETE: 
        //remove(position, success);
        break;
      default: 
        cout << "Error" <<endl;
        break;
    }
    //actual = get_status();
    if(actual == false && expected_status[i] == false)
      cout << "Good" <<endl;
    if(actual == true && expected_status[i] == true)
      cout << "Good" <<endl;
    if(actual == false && expected_status[i] == true)
    {
      cout << "Error" << " * " <<endl;
      numError++;
    }
    if(actual == true && expected_status[i] == false)
    {
      cout << "Error" << " & "<<endl;
      numError++;
    }
  }
}
  /*  Task 3 is done! No more code below this line */
  /*================================================================================*/
  
