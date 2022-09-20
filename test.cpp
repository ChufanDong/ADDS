
#include <iostream>

int numDup(int arr[], int start, int size, int element, int dup){
  int n=start;
  if(n=size){
    return dup;
  }
  if (n<size){ 
    if (arr[n] == element){
        return numDup(arr, start+1, size, element, dup+1);
    }
    else{
        return numDup(arr, start+1, size, element, dup);
    }
  }
}

int numDup(int arr[], int start, int size, int element){
    return numDup(arr, start,  size, element, 0);
}