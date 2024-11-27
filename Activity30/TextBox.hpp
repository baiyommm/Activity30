#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <string>

using namespace std;

namespace Functions {
    class TextBox {
    private:
        string value;

    public:
        TextBox();

        // Explicit constructor
        explicit TextBox(const string& initialValue);

        // Setter
        void setValue(const string& newValue);

        // Getter
        string getValue() const;
    };
}

#endif
