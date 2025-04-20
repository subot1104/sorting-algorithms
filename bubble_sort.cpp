#include "bubble_sort.h"
#include <iostream>
#include <fstream>
using namespace std:

bubble_sort::bubble_sort(){
  int *data = NULL;
}

bubble_sort::~bubble_sort(){
  for(int i; i < size; i++)
    delete[] data[i];
}

void bubble_sort::read(const string& file, int f_size){
  if(data == NULL){
    data = new int[f_size];
    size = 0;
  }

  ifstream unsorted;
  unsorted.open(file);

  for(int i = 0; i < f_size; i++){
    unsorted >> data[i];
    size ++;
  }
  unsorted.close(file);
}

void bubble_sort::write(const string& file){
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

void bubble_sort::sort(){
  bool is_swap = true;
  int temp;
  while(is_swap)
    is_swap = false;
  for(int i = 1; i < size; i++){
    if(data[i] < data[i-1]){
      temp = data[i];
      data[i] = data[i-1];
      data[i-1] = temp;
      is_swap = true;
    }
  }
 }

