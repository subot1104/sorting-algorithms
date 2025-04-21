#ifndef INSERT_SORT_H
#define INSERT_SORT_H
#include <string>
class insert_sort{
private:
  int *data;
  int *count;

  int size;

public:
  insert_sort();
  ~insert_sort();

  void read(const std::string& file, int f_size);
  void write(const std::string& file);
  void sort();
};

#endif
