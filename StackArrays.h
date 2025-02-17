#ifndef STACKARRAYS_H
#define STACKARRAYS_H

#include "defs.h"
#include "TextArea.h"

class StackArrays {
private:
    TextArea objectArray[MAX_ARRAY];
    TextArea* pointerArray[MAX_ARRAY];
    int currentCount;

public:
    StackArrays();

    ~StackArrays();

    TextArea* getObjectArray();

    TextArea** getPointerArray();

    TextArea* getPointer(int index);

    TextArea& getReference(int index);

    void addTextArea(TextArea ta);
};

#endif