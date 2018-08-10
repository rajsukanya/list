#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

#define READ 0
#define WRITE 1
#define DELETE 2

const int NUM_OPERATIONS = 10;

void retrieve(int position, list_item_type &DataItem, bool &success) const;
void insert(int new_position, list_item_type new_item, bool &success);
void remove(int position, bool &success);
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

  string line;
  bool actual, success;
  int position, new_position, DataItem;
  int lineNum, expected, numError = 0;
  int op[NUM_OPERATIONS], key[NUM_OPERATIONS], expected_status[NUM_OPERATIONS];

  lineNum = 0;
  while(getline(inStream, line))
  {
    //cout << lineNum << " --> " << line <<endl;
    lineNum++;
  
    if(line == "NUM_OPERATIONS 10")
    {
      for(int i = 0; i < NUM_OPERATIONS; i++)
      {
        inStream >> op[i] >> key[i] >> expected_status[i];
       
        actual = get_status();
        expected = expected_status[i];

        if(expected == 0)
          actual = false;
        if(expected == 1)
          actual = true;
          
        //cout << op[i] <<endl;
        //cout << key[i] <<endl;
        //cout << expected_status[i] <<endl;

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

  inStream.close();
}
