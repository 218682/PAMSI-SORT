#ifndef SORTTEST_HH
#define SORTTEST_HH
#include "sort.hh"
#include "stoper.hh"
#include "IRunnable.h"
class SortTest: public sort, public IRunnable
{
public:
  void run(int);
};

#endif
