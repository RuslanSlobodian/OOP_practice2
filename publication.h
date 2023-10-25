#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <iostream>

class Publication
{
    std::string name;
    float price;
public:
    Publication();
    virtual ~Publication(){}
    virtual void getData();
    virtual void printData();
};

#endif // PUBLICATION_H
