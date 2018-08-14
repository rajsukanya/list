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
  bool success, actual_status = false;
  int position, new_position, DataItem;
  int i, t, value, num_errors = 0;
  int *op, *key;
  bool *expected_status;

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
  inStream >> tag >> value;
  cout << tag <<endl;
  cout << value <<endl;
/*  
  while(inStream >> tag >> value)
  {
    cout << "TAG: " <<endl; 
    cout << "VALUE: " <<endl;
  
    if(tag == "NUM_OPERATIONS")
    {
      cout << "VALUE: " <<endl;
      op = new int[value];
      key = new int[value];
      expected_status = new bool[value];

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
        //cout << op[i] <<endl; 
        //cout << key[i] <<endl;
        cout << expected_status[i] <<endl;
      }
    }
  }
  inStream.close();
  */
  /*  Task 2 is done! */
  /*================================================================================*/
  /*  Task 3 perform operations and check for errors */
  /*
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
        cout << "Error" << " # " <<endl;
        break;
    }
    //actual_status = get_status();
    if(actual_status != expected_status[i]){
      cout << "Error" << endl;
      num_errors++;
    }
    else
    {
      cout << "Good" <<endl;
    }
  }
  cout << "number of errors (Ben's way): " << num_errors << endl;
  */
  /*  Task 3 is done! No more code below this line */
  /*================================================================================*/  
}
  
