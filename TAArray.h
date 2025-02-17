#ifndef TAARRAY_H
#define TAARRAY_H

#include "defs.h"

class TextArea;

class TAArray {
public:
    TAArray(int capacity);

    ~TAArray();

    bool add(TextArea* ta);

    bool add(TextArea* ta, int index);

    int size() const;

    TextArea* get(int index) const;

private:
    TextArea** array;
    int capacity;
    int count;
};

#endif