#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    string path;
    cout << "Input path" << endl;
    cin >> path;
    ifstream file(path);
    if (!file.is_open()) {
        cout << "Can not open file!";
        return 0;
    }
    vector<double> numbers;
    double num;
    do {
        file >> num;
        numbers.push_back(num);
    } while (!file.eof());
    vector<int> saws;
    int saw = 1;
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i - 1] < numbers[i]) {
            saw++;
        } else {
            saws.push_back(saw);
            saw = 1;
        }
        saws.push_back(saw);
    }
    int max = -1;
    for (int i = 0; i < saws.size(); i++) {
        if (saws[i] > max) {
            max = saws[i];
        }
    }
    cout << "Length of the longest 'saw': " << max;
    return 0;
}