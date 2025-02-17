#include "StackArrays.h"
#include <cstddef>


StackArrays::StackArrays() {
    currentCount = 0;
    for(int i = 0; i < MAX_ARRAY; i++) {
        pointerArray[i] = nullptr;
    }
}

StackArrays::~StackArrays() {
    for(int i = 0; i < currentCount; i++) {
        delete pointerArray[i];
        pointerArray[i] = nullptr;
    }
}

TextArea* StackArrays::getObjectArray() {
    return objectArray;
}

TextArea** StackArrays::getPointerArray() {
    return pointerArray;
}

TextArea* StackArrays::getPointer(int index) {
    if(index < 0 || index >= currentCount) {
        return nullptr;
    }
    return pointerArray[index];
}

TextArea& StackArrays::getReference(int index) {
    return objectArray[index];
}

void StackArrays::addTextArea(TextArea ta) {
    if(currentCount < MAX_ARRAY) {
        objectArray[currentCount] = ta;
        pointerArray[currentCount] = new TextArea(ta);

        currentCount++;
    }
}