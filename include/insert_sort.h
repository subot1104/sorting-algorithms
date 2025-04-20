#ifndef COUNT_SORT_H
#define COUNT_SORT_H

class insert_sort{
Private:
  int *data;
  int *count;
  int *key;

  int size;
  int count_size;

  void count();

Public:
  count_sort();
  ~count_sort();

  void read(const std::string& file, int f_size);
  void write(const std::string& file);
  void sort();

#endif
