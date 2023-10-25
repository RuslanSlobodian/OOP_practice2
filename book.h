#ifndef BOOK_H
#define BOOK_H

#include "publication.h"

class Book : public Publication
{
    int pageCount;
public:
    Book();
    void getData() override;
    void printData() override;
};

#endif // BOOK_H
