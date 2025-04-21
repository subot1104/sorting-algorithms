#ifndef COUNT_SORT_H
#define COUNT_SORT_H
#include <string>
class count_sort{
private:
  int *data;
  int *count;
  int *key;

  int size;
  int count_size;

  void count_alg();

public:
  count_sort();
  ~count_sort();

  void read(const std::string& file, int f_size);
  void write(const std::string& file);
  void sort();
};
#endif
