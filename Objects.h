#ifndef OBJECTS_H
#define OBJECTS_H

#include <iostream>
using namespace std;

class Objects {
 public:
  Objects(char* newName);  
  char* getName();
  ~Objects();
 private:
  char* name;
};

#endif /* OBJECTS_H */