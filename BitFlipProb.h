#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"
#include "Individual.h"

class BitFlipProb : public Mutator {
  public: 
    BitFlipProb(double p);
    Individual mutate(Individual individual, int k);
  private:
    double p;
};

#endif