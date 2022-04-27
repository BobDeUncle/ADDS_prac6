#include "BitFlip.h"

#include "string"

using namespace std;

Individual BitFlip::mutate(Individual individual, int k) {
  k--;
  string binString = individual.getString();

  while (k >= binString.length()) {
    k = k - binString.length();
  }

  if (binString.at(k) == '0') {
    binString.at(k) = '1';
  } else {
    binString.at(k) = '0';
  }

  Individual offspring(binString);

  return offspring;
};