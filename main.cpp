#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

using namespace std;

int main(){
    int Value;
    vector<int> Vector;

    while(cin>>Value){
        Vector.push_back(Value);
        if(cin.get()=='\n'){
            break;
        }
    }

    MapTriple mTriple;
    MapSquare mSquare;
    MapAbsoluteValue mAbsVal;
    FilterOdd fOdd;
    FilterNonPositive fNonPo;
    FilterForTwoDigitPositive fTwoDiPo;
    ReduceMinimum rMini;
    ReduceGCD rGCD;

    vector<int>V1=mTriple.map(Vector);
    vector<int>V2=mAbsVal.map(V1);
    vector<int>V3=mTriple.map(V2);
    vector<int>V4=fTwoDiPo.filter(V3);
    vector<int>V5=fOdd.filter(V4);

    cout<<rMini.reduce(V5)<<" "<<rGCD.reduce(V5)<<endl;

    return 0;
}