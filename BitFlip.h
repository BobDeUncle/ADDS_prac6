#ifndef BITFLIP_H
#define BITFLIP_H

#include "Mutator.h"
#include "Individual.h"

class BitFlip : public Mutator {
  public: 
    Individual mutate(Individual individual, int k);
};

#endif