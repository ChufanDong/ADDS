#include <iostream>

int numDup(int arr[], int start, int size, int element){
  int n=start;
  if(n=size){
    return 0;
  }
  if (n<size){ 
    if (arr[n] == element){
        return 1+numDup(arr, start+1, size, element);
    }
    else{
        return numDup(arr, start+1, size, element);
    }
  }
}