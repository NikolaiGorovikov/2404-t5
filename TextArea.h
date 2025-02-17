#ifndef TEXTAREA_H
#define TEXTAREA_H

#include <string>
#include "defs.h"
#include "RGB.h"

class TextArea {
private:
    Rectangle dimensions;
    std::string text;
    std::string id;
    RGB fill;
    RGB border;

public:
    TextArea();
    TextArea(int x, int y, int width, int height,
             const std::string& id,
             const std::string& text,
             const RGB& fill = RGB(255, 255, 255),
             const RGB& border = RGB(0, 0, 0));
    TextArea(const Rectangle& rect,
             const std::string& id,
             const std::string& text,
             const RGB& fill = RGB(255, 255, 255),
             const RGB& border = RGB(0, 0, 0));

    TextArea(const TextArea& other);

    Rectangle getDimensions() const;
    std::string getText() const;
    std::string getId() const;
    RGB getFill() const;
    RGB getBorder() const;

    void setDimensions(const Rectangle& r);
    void setText(const std::string& t);
    void setId(const std::string& i);
    void setFill(const RGB& f);
    void setBorder(const RGB& b);

    bool overlaps(const TextArea& ta) const;

    void print() const;
};

#endif