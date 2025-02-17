#include "HeapArrays.h"
#include <cstddef>


HeapArrays::HeapArrays() {

    objectArray = new TextArea[MAX_ARRAY];


    pointerArray = new TextArea*[MAX_ARRAY];

    currentCount = 0;

    for(int i = 0; i < MAX_ARRAY; i++) {
        pointerArray[i] = nullptr;
    }
}


HeapArrays::~HeapArrays() {

    for(int i = 0; i < currentCount; i++) {
        delete pointerArray[i];
        pointerArray[i] = nullptr;
    }


    delete[] objectArray;
    delete[] pointerArray;
}

TextArea* HeapArrays::getObjectArray() {
    return objectArray;
}

TextArea** HeapArrays::getPointerArray() {
    return pointerArray;
}

TextArea* HeapArrays::getPointer(int index) {
    if(index < 0 || index >= currentCount) {
        return nullptr;
    }
    return pointerArray[index];
}

TextArea& HeapArrays::getReference(int index) {
    return objectArray[index];
}


void HeapArrays::addTextArea(TextArea ta) {
    if(currentCount < MAX_ARRAY) {
        objectArray[currentCount] = ta;

        pointerArray[currentCount] = new TextArea(ta);

        currentCount++;
    }
}