#include <iostream>
using namespace std;

int main() {
    //Task 1
    double profit, general = 0;
    for (int i = 1; i <= 6; i++) {
        cout << "Enter the profit for " << i << " month";
        cin >> profit;
        general += profit;
    }
    cout << "Total profit for 6 months: " << general << "\n";


    //Task 2
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    cout << "Array in reverse order: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << "\n";


    //Task 3
    const int sides = 5;
    double side_per, per = 0;
    double sides_arr[sides];

    for (int i = 0; i < sides; i++) {
        cout << "Enter the length " << i + 1 << " side: ";
        cin >> side_per;
        sides_arr[i] = side_per;
        per += side_per;
    }

    cout << "The perimeter of the pentagon: " << per << "\n";


    //Task 4
    int months[12];
    int max_profit = 0, min_profit = 0;
    for (int i = 0; i < 12; i++) {
        cout << "Profit " << i + 1 << " in month: ";
        cin >> months[i];
        if (months[i] > months[max_profit]) max_profit = i;
        if (months[i] < months[min_profit]) min_profit = i;
    }
    cout << "Maximum proft was: " << max_profit + 1 << " month " << "\n";
    cout << "Minimum proft was: " << min_profit + 1 << " month " << "\n";
    return 0;
}
