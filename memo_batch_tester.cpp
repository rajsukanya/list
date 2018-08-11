#include <iostream>
#include <fstream>
#include <cstdlib>
#include "list.h"
#include "list.cpp"
using namespace std;

#define READ 0
#define WRITE 1
#define DELETE 2

bool get_status();

int main()
{
  ifstream inStream;

  inStream.open("operation_sequence_with_feedback-10-20-30-4");
  if(inStream.fail())
  {
    cout << "Failed to open file" <<endl;
    exit(1);
  }

  string line, tag;
  bool expected, success;
  int position, new_position, DataItem;
  int value, lineNum, expected, numError = 0;
//  int op[NUM_OPERATIONS], key[NUM_OPERATIONS], expected_status[NUM_OPERATIONS];

  lineNum = 0;
   
  while(getline(inStream, line))
  {
    //lineNum++;
    inStream >> tag >> value;
    cout << "TAG: " << tag <<endl;
    cout << "VALUE: " << value <<endl;
    
    if(tag == "NUM_OPERATIONS")
    {
      for(int i = 0; i < value; i++)
      {
        inStream >> op[i] >> key[i] >> expected_status[i];
      
        if(expected_status[i] == 0)
          expected = false;
        if(expected_status[i] == 1)
          expected = true;
      }
      inStream.close();

      //make loop
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
      }
     }
    }
}
