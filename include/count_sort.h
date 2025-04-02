#ifndef COUNT_SORT_H
#define COUNT_SORT_H

class count_sort{
Private:
  int *data;

Public:
  insert_sort();
  ~insert_sort();

  void read(const std::string& file, int size);
  void write(const std::string& file);
  void sort();

#endif
