#include <iostream>
#include <Windows.h>
#include <vector>
#include <algorithm>

using namespace std;

void removeEvensAndSortDescending(vector<int>& numbers) {
    numbers.erase(remove_if(numbers.begin(), numbers.end(), [](int num) { return num % 2 == 0; }), numbers.end());
    sort(numbers.begin(), numbers.end(), greater<int>());
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<int> numbers = { 10, 3, 7, 8, 2, 5, 6, 9, 1,-3 };

    cout << "Початковий вектор: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    removeEvensAndSortDescending(numbers);

    cout << "Модифікований вектор: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
