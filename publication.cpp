#include "publication.h"
#include "book.h"
#include "audibook.h"
#include <windows.h>

using namespace std;

Publication::Publication()
{

}

void Publication::getData()
{
    cout << "Enter title: ";
    cin >> this->name;
    cout << "Enter price: ";
    cin >> this->price;
}

void Publication::printData()
{
    cout << "Title: "  << this->name << endl;
    cout << "Price: "  << this->price << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Publication* array[4];

    int choise;
    for (int i = 0; i < 4; ++i) {
        cout << "What object do you want to craete? Book - 1, audiobook - 2";
        cin >> choise;
        if (choise == 1) {
            array[i] = new Book();
        } else {
            array[i] = new AudioBook();
        }
        array[i]->getData();
    }

    for (int i = 0; i < 4; ++i) {
        array[i]->printData();
    }
    return 0;
}
