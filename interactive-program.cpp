#include <iostreamm>
#include <string>
using namespace std;

int main()

    int coice;

    //Main menu
    do {
        cout << "\n========= Interactive Utility Program =========\n";
        cout << "1. Factoral calculator (while loop)\n";
        cout << "2. Number pyramid (for loop, nested loops)\n";
        cout << "3. Sum of even or odd numbers (do-while loop)\n";
        cout << "4. Reverse a string (while loop)\n";
        cout << "Exit program\n";
        cout << "=================================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // option 1. factoral calculator
        if (coice ==1) {
            int N;
            cout << "Enter a positive integer:";
            cin >> N;

            while (N < 1) {
                cout << "Please enter a positive integer: ";
                cin >> N;
            }

            int i = 1;
            unasigned long long factoral =1;

            while (i <= N) {
                factoral *= i;
                i++;
            }

            cout << "\nFactoral of " << N << " is: " << factoral << endl;
        }

        // choice 2: Number pyramid
        else if (choice == 2) {
            int rows;
            cout << "Enter number of rows: ";
            cin >> rows;

            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= rows - i; j++) {
                    cout " ";
                }

                for (int k = 1; k <= i; k++) {
                    cout << k << " ";
                }
                cout << endl;
            }
        }

        // Coice 3; sum of even or odd numbers
        else if (choice == 3) {
            int type, N;
            cout << "Please select one:\n1. Sum of even numbers\n2. Sum of odd numbers\n";
            cin >> type;

            cout << "Enter the upper limit (Positive integers only): ";
            cin >> N;

            while (N < 1) {
                cout << "Please enter a positive integer: ";
                cin >> N;
            }

            int sum =0;
            int i = 1;

            do {
                if (type == 1 && i % 2 == 0) {
                    sum += i;
                } else if (type == 2 && i % 2 != 0) {
                    sum += i;
                }
                i++;
            } while (i <= N);

            if (type == 1) {
                cout << "Sum of even numbers up tp " << N << ": " << sum << endl;
            } else if (type == 2) {
                cout << "Sum of odd numbers up to " << N << ": " << sum << endl'
            } else {
             cout << "Invalid input, please choose 1 or 2.\n";
            }
            }

            // Choice 4: Reverse a string
            else if (choice == 4) {
            string str;
            cout << "Enter a string: ";
            cin >> str;

            string reversed = "";
            int i = str.length() - 1;

            while (i >= 0) {
            reversed =+ str[i];
            i--;
            }

            cout << "reversed string; " << reversed << endl;
            }

            //choice 5: Exit
            else if (choice == 5) {
            cout << "Goodbyt! Thank you for using the program. \n";
            }

            //Invalid choice selection
            else {
                cout << "Invalid choice. Please choose a number between 1 and 5. \n";
            }

            } while (choice != 5); 

            return 0;
            }
