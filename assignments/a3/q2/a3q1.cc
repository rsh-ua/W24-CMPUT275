#include <iostream>
#include "2DMotion.h"
using namespace std;

void invalidTarget(char target) {
    cout << "Invalid test case! ";
    cout << "Invalid target for new command: '";
    cout << target << "'" << endl;
}

int main() {
    Point p;
    Force f;
    char cmd, target;
    float scalar;
    // Loop reads commands. Possible commands are:
    /*
     *  n p - read in the value for the point, next inputs
              should be the values for that point
     *  n f - read in the value for the force, next inputs
              should be the values for that force
     *  p p - prints out the point
     *  p f - prints out the force
     *  +   - adds the force to the current point, updating
              the point
     *  * n - n should be an integer, multiplies the force by
              that integer and updates the force
     *  q   - prints out the quadrant of the current point
    */
    while (cin >> cmd) {
        switch (cmd) {
            // Command for creating a new point or force. Expects
            // either p or f next for point or force respectively.
            // Then reads in the object.
            case 'n':
                cin >> target;
                if (target == 'p') {
                    cin >> p;
                } else if (target == 'f') {
                    cin >> f;
                } else {
                    invalidTarget(target);
                }
                break;
            // Command for printing the point or force. Expects either
            // p or f next for point or force respectively. Then prints
            // out the appropriate object.
            case 'p':
                cin >> target;
                if (target == 'p') {
                    cout << p << endl;
                } else if (target == 'f') {
                    cout << f << endl;
                } else {
                    invalidTarget(target);
                }
                break;
            // Updates the current point to be the addition of the
            // current point with the force.
            case '+':
                p = p + f;
                break;
            // Updates the current force by multiplying it by a scalar
            // read in. Reads in a float after *.
            case '*':
                cin >> scalar;
                f = f * scalar;
                break;
            // Prints out the current points quadrant.
            case 'q':
                cout << p.quadrant() << endl;
                break;
            default:
                cout << "Invalid test case! ";
                cout << "Invalid command: '" << cmd << "'" << endl;
                break;
        }
    }
    if (!cin && !cin.eof()) {
        cout << "Invalid test case! ";
        cout << "A read failed, likely because the program was trying";
        cout << " to read a number and didn't receive it. ";
        cout << "Make sure your test case is valid!" << endl;
        return -1;
    }
    return 0;
}
