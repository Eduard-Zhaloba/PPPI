#include <iostream>
#include <string>

using namespace std;


double get_sin(double x);
double get_cos(double x);
double get_tan(double x);
double get_ctg(double x);
/// <summary>

    int count;
    cout << "Trigonometric Calculator2" << endl;
    cout << "How many operations do you want to perform? ";
    cin >> count;

    double result = 0;

    for (int i = 0; i < count; i++) {
        string choice;
        double angle;

        cout << "\nSelect function for step " << i + 1 << ":" << endl;
        cout << "sin, cos, tan, ctg" << endl;
        cout << "Your choice: ";
        cin >> choice;

        cout << "Enter angle in degrees: ";
        cin >> angle;

        double current_val = 0;

        if (choice == "sin") current_val = get_sin(angle);
        else if (choice == "cos") current_val = get_cos(angle);
        else if (choice == "tan") current_val = get_tan(angle);
        else if (choice == "ctg") current_val = get_ctg(angle);

        if (i == 0) {
            result = current_val;
        }
        else {
            char op;
            cout << "Enter operator (+, -, *, /) to combine with previous result: ";
            cin >> op;

            if (op == '+') result += current_val;
            else if (op == '-') result -= current_val;
            else if (op == '*') result *= current_val;
            else if (op == '/') {
                if (current_val != 0) result /= current_val;
                else cout << "Error: Division by zero!" << endl;
            }
        }

        cout << "Current result: " << result << endl;
    }

    cout << "\n----------------------------" << endl;
    cout << "Final Result: " << result << endl;

    return 0;
}

