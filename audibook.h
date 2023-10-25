#ifndef AUDIBOOK_H
#define AUDIBOOK_H

#include "publication.h"

class AudioBook : public Publication
{
    float duration;
public:
    AudioBook();
    void getData() override;
    void printData() override;
};

#endif // AUDIBOOK_H
