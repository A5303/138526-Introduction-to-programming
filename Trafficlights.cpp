#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    int time = 0;
    while (true) {
        switch (time % 9) {
            case 0:
            case 1:
            case 2:
                cout << "Red" << endl;
                break;
            case 3:
            case 4:
                cout << "Yellow" << endl;
                break;
            case 5:
            case 6:
            case 7:
            case 8:
                cout << "Green" << endl;
                break;
        }
        time++;
        this_thread::sleep_for(chrono::seconds(1));
    }
    return 0;
}