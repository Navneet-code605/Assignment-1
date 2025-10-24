#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void removeDuplicates(vector<int>& arr) {
    unordered_set<int> seen; 
    vector<int> uniqueArr;   

    for (int num : arr) {
        if (seen.find(num) == seen.end()) { 
            seen.insert(num);
            uniqueArr.push_back(num);     
        }
    }

    arr = uniqueArr; 
}

int main() {
    vector<int> arr = {4, 2, 7, 4, 2, 8, 7, 9};
    cout << "Original Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
