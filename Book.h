#ifndef _BOOK_H
#define _BOOK_H
#include "Document.h"

class Book : public Document{
    public:
    Book();
    int getDocumentID();
};
#endif