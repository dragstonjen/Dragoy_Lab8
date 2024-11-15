#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void removeEvensAndSortDescending(vector<int>& numbers) {
    numbers.erase(
        remove_if(numbers.begin(), numbers.end(), [](int num) { return num % 2 == 0; }),
        numbers.end()
    );

    sort(numbers.begin(), numbers.end(), greater<int>());
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<int> numbers = { 10, 3, 7, 8, 2, 5, 6, 9 };

    cout << "Початковий вектор: ";
    for (int x = 0; x < numbers.size(); x++) {
        cout << numbers[x] << " ";
    }
    cout << endl;

    removeEvensAndSortDescending(numbers);

    cout << "Модифікований вектор: ";
    for (int x = 0; x < numbers.size(); x++) {
        cout << numbers[x] << " ";
    }
    cout << endl;

    return 0;
}
