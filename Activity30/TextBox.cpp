#include "TextBox.hpp"

using namespace std;

namespace Functions {

    TextBox::TextBox() : value("") {}

    // Explicit constructor
    TextBox::TextBox(const string& initialValue) : value(initialValue) {}

    void TextBox::setValue(const std::string& newValue) {
        value = newValue;
    }

    string TextBox::getValue() const {
        return value;
    }
}
