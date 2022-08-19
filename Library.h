#ifndef _LIBRARY_H
#define _LIBRARY_H
#include <vector>
#include <string.h>
#include "Document.h"
using namespace std;

class Library{
    public:
    Document* addDocument(Document* _book); // add a Document to the Library
    bool hasDocument(Document* _book); // check if a Document is in the Library
    private:
    vector<Document*> _library;
};
#endif