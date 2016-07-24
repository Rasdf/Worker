//worker.h
#ifndef WORKER0_H_
#define WORKER0_H_
#include <string>

class Worker {
 private:
  std::string fullname;
  long id;
 public:
  Worker() : fullname("no one"), id(0L) {}
  Worker(const std::string & s, long n)
      : fullname(s), id(n) {}
  virtual ~Woker() = 0;
  virtual void Set();
  virtual void Show() const;
};
#endif
