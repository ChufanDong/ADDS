#include <iostream>
#include <vector>

#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main(){
    int Value;
    int counter = 0;
    vector<int> getEnter;

    while(cin>>Value){
        counter++;
        getEnter.push_back(Value);
        if(cin.get()=='\n'){
            break;
        }
    }

    QuickSort mQuickSort;
    RecursiveBinarySearch Search;
    vector<int> output = mQuickSort.sort(getEnter);
    if (Search.search(output, 1) == 1){
        cout << "true" << " ";
    }
    else{
        cout << "false" << " ";
    }
    int length = output.size();
    for (int i=0; i<length; i++){
        cout<<output[i]<< " ";
    }
    cout<<endl;

    return 0;
}