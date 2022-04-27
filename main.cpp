#include <iostream>

#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
  Individual * offspringPtr = new Individual(mPtr->mutate((*indPtr), k).getString());
  return offspringPtr;
}

int main() {
  string binarystr1, binarystr2;
  int k1, k2;

  cin >> binarystr1 >> k1 >> binarystr2 >> k2;

  Individual individual1(binarystr1);
  Individual individual2(binarystr2);
  Individual * tempOffspringPtr;

  BitFlip bitflip;
  Rearrange rearrange;

  tempOffspringPtr = execute(&individual1, &bitflip, k1);
  Individual offspring1(tempOffspringPtr->getString());

  tempOffspringPtr = execute(&individual2, &rearrange, k2);
  Individual offspring2(tempOffspringPtr->getString());

  cout << offspring1.getString() << " " << offspring2.getString() << " " << offspring2.getMaxOnes() << endl; 
}