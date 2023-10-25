#include "book.h"

Book::Book()
{

}

void Book::getData()
{
    Publication::getData();
    std::cout << "Enter the amount of pages: ";
    std::cin >> this->pageCount;
}

void Book::printData()
{
    Publication::printData();
    std::cout << "Number of pages: "  << this->pageCount << std::endl;
}
