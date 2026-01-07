#include <iostream>
using namespace std;

int main() {
    int arr[50] = {20, 30, 52, 47, 60};
    int n = 5;
    int choice, pos, value, key;
    int i, found;

    do {
        cout << "\n1. Insertion Element";
        cout << "\n2. Deletion Element";
        cout << "\n3. traversal Array";
        cout << "\n4. Searching Element";
        cout << "\n5. Updation Element";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: // Insertion
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> value;

            for (i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = value;
            n++;

            cout << "Element inserted successfully.";
            cout << "\nUpdated Array: ";
            for (i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

        case 2: // Deletion
            cout << "Enter position to delete: ";
            cin >> pos;

            for (i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;

            cout << "Element deleted successfully.";
            cout << "\nUpdated Array: ";
            for (i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

        case 3: // traversal
            cout << "Array elements: ";
            for (i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

        case 4: // Search
            cout << "Enter element to search: ";
            cin >> key;
            found = 0;

            for (i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Element found at position " << i;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                cout << "Element not found.";
            }
            break;

        case 5: // Update
            cout << "Enter position to update: ";
            cin >> pos;
            cout << "Enter new value: ";
            cin >> value;

            arr[pos] = value;

            cout << "Element updated successfully.";
            cout << "\nUpdated Array: ";
            for (i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

        case 0:
            cout << "Exiting program...";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while (choice != 0);

    return 0;
}


