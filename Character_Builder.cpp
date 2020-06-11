#include"Tests.h"
#include"stats.h"

using namespace std;
//int plasdfayer;
//infdsat party_size;

int main() {
    char CheckName = ' ';
    string name;
    while (CheckName != 'y') {
        cout << "What is your name? ";
        getline(cin, name);
        if (not name.empty()) {
            CheckName = ' ';
            while (CheckName != 'n') {
                cout << "Is your name " << name << "? (y/n) ";
                cin >> CheckName;
                if (CheckName == 'y') {
                    break;
                }
            }
        }
    }
    Player Py(name);
    cout << "Hello " << Py.getName() << "!" << endl;
    Tests Test;
    Test.luck();
    //Test.speed();
    //intel_test();
    return 0;
}



