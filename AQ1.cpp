#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement(int arr[], int &size, int capacity, int element) {
    if (size >= capacity) {
        cout << "Array is full, cannot insert element!" << endl;
        return;
    }
    arr[size] = element;
    size++;
    cout << "Element inserted successfully!" << endl;
}

void deleteElement(int arr[], int &size, int element) {
    int pos = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        cout << "Element not found in the array!" << endl;
        return;
    }
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Element deleted successfully!" << endl;
}

void searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            cout << "Element found at position: " << i + 1 << endl;
            return;
        }
    }
    cout << "Element not found in the array!" << endl;
}

int main() {
    const int capacity = 100;
    int arr[capacity];
    int size = 0;
    int choice, element;

    do {
        cout << "\n*** Menu ***" << endl;
        cout << "1. Display Array" << endl;
        cout << "2. Insert Element" << endl;
        cout << "3. Delete Element" << endl;
        cout << "4. Search Element" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;
            case 2:
                cout << "Enter element to insert: ";
                cin >> element;
                insertElement(arr, size, capacity, element);
                break;
            case 3:
                cout << "Enter element to delete: ";
                cin >> element;
                deleteElement(arr, size, element);
                break;
            case 4:
                cout << "Enter element to search: ";
                cin >> element;
                searchElement(arr, size, element);
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}