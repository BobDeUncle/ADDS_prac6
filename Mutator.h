#ifndef MUTATOR_H
#define MUTATOR_H

#include "Individual.h"

class Mutator {
  public: 
    virtual Individual mutate(Individual individual, int k) = 0;
}; 

#endif