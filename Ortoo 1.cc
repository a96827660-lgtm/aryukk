#include <iostream>
using namespace std;

int main() {
    const int zovshoorogdohHonog = 14;
    const int negHonogiinTorguuli = 1000;
    int ashiglasanHonog;

    cout << "Ashiglasan honogoo oruulna uu: ";
    cin >> ashiglasanHonog;

    if (ashiglasanHonog < 0) {
        cout << "Honog sorog baij bolohgui." << endl;
        return 1;
    }

    int hetresenHonog = ashiglasanHonog - zovshoorogdohHonog;
    if (hetresenHonog < 0) {
        hetresenHonog = 0;
    }

    int tuluhDun = hetresenHonog * negHonogiinTorguuli;

    cout << "Ashiglasan hugatsaa: " << ashiglasanHonog << " honog" << endl;
    cout << "Hetersen honog: " << hetresenHonog << " honog" << endl;
    cout << "Tuluh dun: " << tuluhDun << " tugrug" << endl;

    return 0;
}