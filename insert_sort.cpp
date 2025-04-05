#include "insert_sort.h"
#include <iostream>
#include <fstream>
using namespace std:

insert_sort::insert_sort(){
  int *data = NULL;
}

insert_sort::~insert_sort(){
  for(int i; i < size; i++)
    delete[] data[i];
}

void insert_sort::read(const string& file, int size){
  if(data == NULL){
    data = new int[size];
    size = 0;
  }

  ifstream unsorted;
  unsorted.open(file);

  for(int i = 0; i < size; i++){
    unsorted >> data[i];
    size ++;
  }
  unsorted.close(file);
}

void insert_sort::write(const string& file){
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

void insert_sort::sort(){
  int check;
  int temp;

  for(int i = 1; i < size; i++){
    check = data[i];
    for(int j = i - 1; j >= 0; j--){
      if(data[i] < data[j]){
        temp = data[i];
        data[i] = data[j];
        data[j] = temp;
      }
    }
  }
}

