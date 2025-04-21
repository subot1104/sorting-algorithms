#include "count_sort.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

count_sort::count_sort(){
  int *data = NULL;
  int *count = NULL;
  int *key = NULL;
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
  unsorted.close(file);
}

void count_sort::write(const string& file){
  if(data == NULL)
    cout << "ERROR: no data loaded." << endl;
  else{
    ofstream sorted;
    sorted.open(file);

    for(int i < 0; i < size; i++){
      sorted << data[i] << ' ';
    }
  }
}

void count_sort::count_alg(){
bool is_unique = true;
count_size = 0;
//find out how many unique elements there are
for (int i = 0; i < size; i++){
  for (int j = i; j >= 0; j--){
    if(data[j] == data[i])
      is_unique = false;
  }
  if(is_unique){
    count_size++;
  }
  else
    is_unique = true;
//creates space for new elements
  count = new int[count_size];
  for (int i = 0; i < count_size; i++)
    count[i] = 0;
  //assuming that that all 1000 numbers are generated. the count should handle itself though
  key = new int[count_size];
  for (int i = 0; i < count_size; i++)
    key[i] = i;
  //sets up the count for sorting
  for(int i = 0; i < size; i++){
    count[data[i]]++;
  }
  for(int i = 1; i < size; i++){
    count[i] = count[i] + count[i-1];
}

void count_sort::sort(){
  count_alg();

  for(int i = count_size; i >=0; i--){
    while(count[i] != count[i-1]){
      data[count[i]] = key[i];
      count[i]--;
    }
  }
}

