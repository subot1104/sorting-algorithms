#ifndef INSERT_SORT_H
#define INSERT_SORT_H

class insert_sort{
Private:
  int *data;

Public:
  insert_sort();
  ~insert_sort();

  void read(const std::string& file, int size);
  void write(const std::string& file);
  void sort();

#endif
