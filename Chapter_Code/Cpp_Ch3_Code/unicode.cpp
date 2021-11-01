// unicode.cpp by Ming-Lun Lee
#include <iostream>

int main() {
    using namespace std;

    int k\u00F6rper = 5;
    cout << "k\u00F6rper = " << k\u00F6rper << endl;
    cout << "Let them eat g\u00E2teau.\n";
    cout << "\u4F60\u4EEC\u662F\u4F18\u79C0\u7684\u5B66\u751F\n";

    return 0;
}
