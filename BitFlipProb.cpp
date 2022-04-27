#include "BitFlipProb.h"

#include "string"
#include <time.h>

using namespace std;

BitFlipProb::BitFlipProb(double p) {
  this->p = p;
};

Individual BitFlipProb::mutate(Individual individual, int k) {
  string binString = individual.getString();

  // RANNUM GEN FROM https://www.bitdegree.org/learn/random-number-generator-cpp#random-numbers-between-0-and-1
  srand((unsigned) time(NULL));

  for (int i = 0; i < binString.length(); i++) {
    float ranNum = (float) rand()/RAND_MAX; 
    if (ranNum > p) {
      if (binString.at(i) == '0') {
        binString.at(i) = '1';
      } else {
        binString.at(i) = '0';
      }
    }
  }

  Individual offspring(binString);
  return offspring;
};