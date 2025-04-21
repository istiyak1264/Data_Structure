#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using namespace std::chrono;

void bubbleSort(vector<int> a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}

void insertionSort(vector<int> a) {
    int n = a.size();
    for (int i = 1; i < n; i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void selectionSort(vector<int> a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minIdx])
                minIdx = j;
        swap(a[i], a[minIdx]);
    }
}

int main() {
    vector<int> data;
    for (int i = 0; i < 10000; i++)
        data.push_back(rand());

    auto start = high_resolution_clock::now();
    bubbleSort(data);
    auto end = high_resolution_clock::now();
    cout << "Bubble Sort Time   : " << duration_cast<milliseconds>(end - start).count() << " ms" << endl;

    start = high_resolution_clock::now();
    selectionSort(data);
    end = high_resolution_clock::now();
    cout << "Selection Sort Time: " << duration_cast<milliseconds>(end - start).count() << " ms" << endl;

    start = high_resolution_clock::now();
    insertionSort(data);
    end = high_resolution_clock::now();
    cout << "Insertion Sort Time: " << duration_cast<milliseconds>(end - start).count() << " ms" << endl;

    return 0;
}
