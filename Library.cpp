#include <iostream>
#include <vector>
#include <string.h>
#include "Library.h"
using namespace std;

Library::Library(){
    _library.clear();
}
Document* Library::addDocument(Document* _book){
    _library.push_back(_book);
} // add a Document to the Library
bool Library::hasDocument(Document* _book){
    int n=_library.size();
    for (int i=0; i<n; i++){
        if (_library[i]==_book){
            return true;
        }
    }
    return false;
} // check if a Document is in the Library