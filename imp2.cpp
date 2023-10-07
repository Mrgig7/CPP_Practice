#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 100;


class datastore
{
private:
  int count;			// Number of items in the datastore
  int data[SIZE];		// The items themselves
public:
// Initialize the datastore
    datastore ();
//Check if there are any elements before you delete
   ~datastore ();
// Push an item on the datastore
  void add (const int item);
// Pop an item from the datastore
  int del (void);
//create a stack from another datastore
    datastore (const datastore &);
    int getCount();
};

datastore::datastore (void)
{
  count = 0;			// Zero the datastore
}

void
datastore::add (const int item)
{
  data[count] = item;
  ++count;
}

int
datastore::del (void)
{
// datastore goes down by one
  --count;
// Then we return the top value
  return (data[count]);
}

datastore::datastore (const datastore& old_datastore)
{
  
  int i;			// Index used to copy the data
  for (i = 0; i < old_datastore.count; ++i)
    {
      data[i] = old_datastore.data[i];
    }

  count = old_datastore.count;
}


int datastore::getCount(){
    return count;
}

datastore::~datastore ()
{
  if (count != 0)
    cout << "Error: Destroying a nonempty datastore"<<endl;
  else
    cout <<"Success"<<endl;
}

int
main ()
{
  datastore a_datastore;
  int inputCount,val,apopCount,bpopCount;
  cin>>inputCount;
  for (int i=0;i<inputCount;i++){
      cin>>val;
      a_datastore.add(val);
      
  } 
  datastore b_datastore (a_datastore);
  cin>>apopCount;
  for (int i=0;i<apopCount;i++){
     
      a_datastore.del();
      
  } 
  
  cin>>bpopCount;
  for (int i=0;i<bpopCount;i++){
      b_datastore.del();
      
  } 
 
  return 0;
}

