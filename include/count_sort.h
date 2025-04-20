#ifndef COUNT_SORT_H
#define COUNT_SORT_H

class count_sort{
Private:
  int *unsort_data;
  int ud_size;
  int *sort_data;
  int sd_size;
  int *count;
  int c_size;

  void count();

Public:
  insert_sort();
  ~insert_sort();

  void read(const std::string& file, int f_size);
  void write(const std::string& file);
  void sort();

#endif
