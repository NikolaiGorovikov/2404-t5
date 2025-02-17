#ifndef HEAPARRAYS_H
#define HEAPARRAYS_H

#include "defs.h"
#include "TextArea.h"

class HeapArrays {
private:
    TextArea* objectArray;
    TextArea** pointerArray;
    int currentCount;

public:
    HeapArrays();

    ~HeapArrays();

    TextArea* getObjectArray();

    TextArea** getPointerArray();

    TextArea* getPointer(int index);

    TextArea& getReference(int index);

    void addTextArea(TextArea ta);
};

#endif