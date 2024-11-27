#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

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
