#include "count_sort.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

count_sort::count_sort(){
  data = NULL;
  count = NULL;
  key = NULL;
  size = 0;
  count_size = 0;
}

count_sort::~count_sort(){
    delete[] data;
    delete[] count;
    delete[] key;
}

void count_sort::read(const string& file, int f_size){
  if(data == NULL){
    data = new int[f_size];
    size = f_size;
  }

  ifstream unsorted;
  unsorted.open(file);

  for(int i = 0; i < f_size; i++){
    unsorted >> data[i];
  }
  unsorted.close();
}

void count_sort::write(const string& file){
  if(data == NULL)
    cout << "ERROR: no data loaded." << endl;
  else{
    ofstream sorted;
    sorted.open(file);

    for(int i = 0; i < size; i++){
      sorted << data[i] << ' ';
    }
  }
}

void count_sort::count_alg(){
  int max = 0;
  //finds max value and sets it to the size of the count
    for(int i = 0; i < size; i++){
      if(data[i] > max)
        max = data[i];
    }
    count_size = max + 1;
    count = new int[count_size];

    //0 initialization
    for(int i = 0; i < count_size; i++)
      count[i] = 0;
    
    //count each number
    for (int i = 0; i < size; i++)
        count[data[i]]++;  // data[i] must be positive and less than count_size;
    
    //does the accumulative count
    for (int i = 1; i < count_size; i++)
        count[i] += count[i-1];
}
void count_sort::sort(){
  count_alg();
  
  int *output = new int[size];

  for(int i = size - 1; i >= 0; i--){
     output[count[data[i]]-1] = data[i];
     count[data[i]]--;
  }
  delete[] data;
  data = output;
}

