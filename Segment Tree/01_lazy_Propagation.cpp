#include <iostream>
#include <vector>

using namespace std;

vector<int> segment;
vector<int> lazy;

void build(int i, int low, int hi, vector<int> &arr) {
    if (low == hi) {
        segment[i] = arr[low];
        return;
    }
    int mid = (low + hi) / 2;
    build(2 * i + 1, low, mid, arr);
    build(2 * i + 2, mid + 1, hi, arr);
    segment[i] = segment[2 * i + 1] + segment[2 * i + 2];
}

void propagate(int i, int low, int hi) {
    if (lazy[i] != 0) {
        segment[i] += (hi - low + 1) * lazy[i];  // Apply lazy update
        
        if (low != hi) {  // Not a leaf node
            lazy[2 * i + 1] += lazy[i];  // Push lazy to left child
            lazy[2 * i + 2] += lazy[i];  // Push lazy to right child
        }

        lazy[i] = 0;  // Clear current lazy value
    }
}

int getSum(int i, int l, int r, int low, int hi) {
    propagate(i, low, hi);  // Apply any pending updates

    if (low > r || hi < l) return 0;  // No overlap
    if (l <= low && hi <= r) return segment[i];  // Full overlap

    int mid = (low + hi) / 2;
    int left = getSum(2 * i + 1, l, r, low, mid);
    int right = getSum(2 * i + 2, l, r, mid + 1, hi);

    return left + right;
}

void update(int i, int low, int hi, int l, int r, int val) {
    propagate(i, low, hi);  // Apply any pending updates

    if (low > r || hi < l) return;  // No overlap

    if (low >= l && hi <= r) {  // Full overlap
        lazy[i] += val;  // Store the update
        propagate(i, low, hi);  // Apply update immediately
        return;
    }

    int mid = (low + hi) / 2;
    update(2 * i + 1, low, mid, l, r, val);
    update(2 * i + 2, mid + 1, hi, l, r, val);
    
    segment[i] = segment[2 * i + 1] + segment[2 * i + 2];  // Update parent
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    vector<int> arr(n);
    segment.resize(4 * n, 0);
    lazy.resize(4 * n, 0);

    for (int i = 0; i < n; i++) cin >> arr[i];
    build(0, 0, n - 1, arr);

    update(0, 0, n - 1, 0, n - 1, 2);
    cout << "Sum after update: " << getSum(0, 0, n - 1, 0, n - 1) << endl;

    return 0;
}
