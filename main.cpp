#include "Rearrange.h"
#include "BitFlipProb.h"
#include "BitFlip.h"
#include "Individual.h"
#include "BitFlip.h"
#include "Mutator.h"
#include <iostream>
using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k);

int main()
{
    string binarystr1;
    string binarystr2;
    int k1;
    int k2;
    cin >> binarystr1 >> k1 >> binarystr2 >> k2;

    Individual *child1 = new Individual(binarystr1);
    Individual *child2 = new Individual(binarystr2);

    Mutator * BF = new BitFlip;
    Mutator * RR = new Rearrange;

    cout << execute(child1, BF, k1)->getString() << ' ';
    cout << execute(child2, RR, k2)->getString() << ' ' << execute(child2, RR, k2)->getMaxOnes() << endl;

    return 0;
}

Individual * execute(Individual * indPtr, Mutator * mPtr, int k)
{
    Individual temp = mPtr->mutate(*indPtr,k); //Deal with the opreation.
    Individual * res = new Individual(temp.getString()); //Store the result as a pointer.
    return res;
}