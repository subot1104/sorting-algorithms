#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

class bubble_sort{
Private:
  int *data;
  int size;
Public:
  bubble_sort();
  ~bubble_sort();

  void read(const std::string& file, int f_size);
  void write(const std::string& file);
  void sort();

#endif
