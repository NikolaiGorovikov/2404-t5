#include "TextArea.h"
#include <iostream>

using namespace std;

TextArea::TextArea()
    : dimensions{0, 0, 0, 0},
      text(""),
      id(""),
      fill(RGB(255, 255, 255)),
      border(RGB(0, 0, 0))
{
}

TextArea::TextArea(int x, int y, int width, int height,
                   const std::string& id,
                   const std::string& text,
                   const RGB& fill,
                   const RGB& border)
    : dimensions{ x, y, width, height },
      text(text),
      id(id),
      fill(fill),
      border(border)
{
}

TextArea::TextArea(const Rectangle& rect,
                   const std::string& id,
                   const std::string& text,
                   const RGB& fill,
                   const RGB& border)
    : dimensions(rect),
      text(text),
      id(id),
      fill(fill),
      border(border)
{
}

TextArea::TextArea(const TextArea& other)
    : dimensions(other.dimensions),
      text("DUPLICATE"),
      id(other.id),
      fill(other.fill),
      border(other.border)
{
}


Rectangle TextArea::getDimensions() const {
    return dimensions;
}

std::string TextArea::getText() const {
    return text;
}

std::string TextArea::getId() const {
    return id;
}

RGB TextArea::getFill() const {
    return fill;
}

RGB TextArea::getBorder() const {
    return border;
}

void TextArea::setDimensions(const Rectangle& r) {
    dimensions = r;
}

void TextArea::setText(const std::string& t) {
    text = t;
}

void TextArea::setId(const std::string& i) {
    id = i;
}

void TextArea::setFill(const RGB& f) {
    fill = f;
}

void TextArea::setBorder(const RGB& b) {
    border = b;
}

bool TextArea::overlaps(const TextArea& ta) const {
    return dimensions.overlaps(ta.dimensions);
}

void TextArea::print() const {
    cout << "TextArea id: " << id << endl;
    cout << "Preferred location: " << dimensions.x << ", " << dimensions.y << endl;
    cout << "Size: " << dimensions.width << ", " << dimensions.height << endl;
    cout << "Text: " << text << endl;
}