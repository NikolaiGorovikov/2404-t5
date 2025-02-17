#include "TAArray.h"

TAArray::TAArray(int cap)
    : capacity(cap), count(0)
{
    array = new TextArea*[capacity];
}

TAArray::~TAArray() {
    delete[] array;
}

bool TAArray::add(TextArea* ta) {
    if (count >= capacity) {
        return false;
    }
    array[count++] = ta;
    return true;
}

bool TAArray::add(TextArea* ta, int index) {
    if (index < 0 || index > count || count >= capacity) {
        return false;
    }

    for (int i = count; i > index; --i) {
        array[i] = array[i - 1];
    }
    array[index] = ta;
    ++count;
    return true;
}

int TAArray::size() const {
    return count;
}

TextArea* TAArray::get(int index) const {
    if (index < 0 || index >= count) {
        return nullptr;
    }
    return array[index];
}