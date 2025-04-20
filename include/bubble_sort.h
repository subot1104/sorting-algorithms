#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

class bubble_sort{
Private:
  int *data;
  int d_size;
  int *count;
  int c_size;

Public:
  insert_sort();
  ~insert_sort();

  void read(const std::string& file, int size);
  void write(const std::string& file);
  void sort();

#endif
