#include <iostream>
#include <fstream>
#include <cstdlib>
#include "cache.h"
#include "memo_batch_tester.h"
using namespace std;

#define READ 0
#define WRITE 1
#define DELETE 2

int memo_batch_tester(int argc, char *argv[])
{
  ifstream inStream;
  string tag, filename;
  bool actual_status = false;
  int i, t, value, num_operations, num_errors = 0, num_trials = 0;
  int *op;
  data_item_type *key;
  bool *expected_status;

  /*================================================================================*/
  /*  Task 1: Deal with command line parameters  */
  
  /* for now just this, but later this section gets more complicated */
  filename = argv[1];
  cout << filename <<endl;
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
    if(tag == "NUM_OPERATIONS")
    {
      num_operations = value;
      op = new int[num_operations];
      key = new long int[num_operations];
      expected_status = new bool[num_operations];
      for(i = 0; i < num_operations; i++)
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
      }
    }
  }
  inStream.close();
  
  /*  Task 2 is done! */
  /*================================================================================*/
  /*  Task 3 perform operations and check for errors */
  Cache cache;
  num_operations = value;
  data_item_type *item;
  item = new long int;
  for(i = 0; i < num_operations; i++)
  {
    switch(op[i])
    {
      case READ:
        item = cache.retrieve(key[i]);
        break;
      case WRITE: 
        cache.insert(key[i]);
        break;
      case DELETE: 
        cache.remove(key[i]);
        break;
      default: 
        cout << "Failed" << endl;
        exit(1);
    }
    actual_status = cache.get_status();
    if(actual_status != expected_status[i])
    {
      num_errors++;
    }
    num_trials++;
  }
  cout << "Number of errors: " << num_errors << "/" << num_trials << endl;
  
  /*  Task 3 is done! No more code below this line */
  /*================================================================================*/  
}
  
