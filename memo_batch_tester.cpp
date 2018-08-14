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
  string tag, filename;
  bool success, actual_status = false;
  int position, new_position;
  int i, t, value, num_errors = 0;
  int *op;
  list_item_type *key;
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
  
  while(inStream >> tag >> value)
  {
    //cout << "TAG: " << tag <<endl; 
    //cout << "VALUE: " << value <<endl;
  
    if(tag == "NUM_OPERATIONS")
    {
      //cout << "VALUE***: " << value <<endl;
      op = new int[value];
      key = new long int[value];
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
        //cout << expected_status[i] <<endl;
      }
    }
  }
  inStream.close();
  
  /*  Task 2 is done! */
  /*================================================================================*/
  /*  Task 3 perform operations and check for errors */
  List list;
  for(i = 0; i < value; i++)
  {
    switch(op[i])
    {
      case READ:
        list.retrieve(position, key[i], success);
        break;
      case WRITE: 
        list.insert(new_position, key[i], success);
        break;
      case DELETE: 
        list.remove(position, success);
        break;
      default: 
        cout << "Failed" <<endl;
        break;
    }
    actual_status = list.get_status();
    //cout << "Actual: " << actual_status <<endl;
    //cout << "Expected: " << expected_status[i] <<endl;

    if(actual_status != expected_status[i])
    {
      cout << "Error" << endl;
      num_errors++;
    }
    else
    {
      cout << "Good" <<endl;
    }
  }
  cout << "Number of errors: " << num_errors << endl;
  
  /*  Task 3 is done! No more code below this line */
  /*================================================================================*/  
}
  
