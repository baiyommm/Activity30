#include <iostream>
#include "TextBox.hpp"

using namespace std;
using namespace Functions;

int main() {

    TextBox firstBox;
    cout << "Default Value: " << firstBox.getValue() << endl;

    firstBox.setValue("Default Constructor");
    cout << "Updated value: " << firstBox.getValue() << endl;

    TextBox secondBox("Explicit Constructor");
    cout << "Explicit Value: " << secondBox.getValue() << endl;

    return 0;
}
