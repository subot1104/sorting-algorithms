#ifndef COUNT_SORT_H
#define COUNT_SORT_H

class insert_sort{
Private:
  int *data;
  int *count;

  int size;

Public:
  insert_sort();
  ~insert_sort();

  void read(const std::string& file, int f_size);
  void write(const std::string& file);
  void sort();

#endif
