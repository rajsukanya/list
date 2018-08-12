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
  cout << "Inside memo batch tester" <<endl;
  /*
  for(int i = 0; i < argc-1; i++)
  {
    cout << argv[i] <<endl;
  }
  */
  /*
  ifstream inStream;
  string line, tag;
  list_item_type new_item;
  bool expected, success, actual;
  int position, new_position, DataItem;
  int i, value, lineNum, numError = 0;

for(i = 0; i < argc; i++)
{  
  inStream.open(argv[0]);
  if(inStream.fail())
  {
    cout << "Failed to open file" <<endl;
    exit(1);
  }

  lineNum = 0;
  while(getline(inStream, line))
  {
    //lineNum++;
    inStream >> tag >> value;
    cout << "TAG: " << tag <<endl;
    cout << "VALUE: " << value <<endl;
    
    if(tag == "NUM_OPERATIONS")
    {
      int op[value], key[value], expected_status[value];

      for(i = 0; i < value; i++)
      {
        inStream >> op[i] >> key[i] >> expected_status[i];
      
        if(expected_status[i] == 0)
          expected = false;
        if(expected_status[i] == 1)
          expected = true;
      }
      inStream.close();
      
      i = 0;
      while(i < value)
      {  
        switch(op[i])
        {
          case READ:
            retrieve(position, DataItem, success);
          case WRITE:
            insert(new_position, new_item, success);
          case DELETE:
            remove(position, success);
          default:
            cout << "Error" <<endl;
            break;
         }
       
         actual = get_status();
         if(actual == false && expected == false)
           cout << "Good" <<endl;
         if(actual == true && expected == true)
            cout << "Good" <<endl;
         if(actual == false && expected == true)
         {
            cout << "Error" <<endl;
            numError++;
         }
         if(actual == true && expected == false)
         {
           cout << "Error" <<endl;
           numError++;
         }
         i++;
      }
     }
    }
}
*/
}
