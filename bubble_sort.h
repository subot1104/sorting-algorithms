#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H
#include <string>
class bubble_sort{
private:
  int *data;
  int size;
public:
  bubble_sort();
  ~bubble_sort();

  void read(const std::string& file, int f_size);
  void write(const std::string& file);
  void sort();
};
#endif
