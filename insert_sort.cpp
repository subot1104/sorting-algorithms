#include "insert_sort.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

insert_sort::insert_sort(){
  data = NULL;
}

insert_sort::~insert_sort(){
  delete[] data;
}

void insert_sort::read(const string& file, int f_size){
  if(data == NULL){
    data = new int[size];
    size = f_size;
  }

  ifstream unsorted;
  unsorted.open(file);

  for(int i = 0; i < size; i++){
    unsorted >> data[i];
  }
  unsorted.close();
}

void insert_sort::write(const string& file){
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

void insert_sort::sort(){
  int key;
  for(int i = 1; i < size; i++){
    key = data[i];
    int j = i - 1;
    while(j >= 0 && data[j] > key){
        data[j + 1] = data[j];
        j--;
        }
        data[j + 1] = key;
        }
}

