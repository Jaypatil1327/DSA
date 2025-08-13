#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {-9, 0, -4, -3};
    vector<vector<int>> subsets; // To store all subsets
    subsets.push_back({}); // Start with the empty subset

    for (int num : arr) {
        int n = subsets.size();
        // For each existing subset, create a new subset by adding the current number
        for (int i = 0; i < n; i++) {
            vector<int> newSubset = subsets[i];
            newSubset.push_back(num);
            subsets.push_back(newSubset);
        }
    }

    // Print all subsets
    cout << "Subsets:\n";
    for (const auto& subset : subsets) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
