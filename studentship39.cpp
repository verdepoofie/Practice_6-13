#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string path;
    char buff;
    int s_count = 0, t_count = 0, u_count = 0, d_count = 0, e_count = 0, n_count = 0, h_count = 0, i_count = 0, p_count = 0;
    cout << "Input path" << endl;
    cin >> path;
    ifstream file(path);
    if (!file.is_open()) {
        cout << "Can not open file!";
        return 0;
    }
    do {
        file >> buff;
        switch (buff) {
            case 's': {
                s_count++;
                break;
            }
            case 't': {
                t_count++;
                break;
            }
            case 'u': {
                u_count++;
                break;
            }
            case 'd': {
                d_count++;
                break;
            }
            case 'e': {
                e_count++;
                break;
            }
            case 'n': {
                n_count++;
                break;
            }
            case 'h': {
                h_count++;
                break;
            }
            case 'i': {
                i_count++;
                break;
            }
            case 'p': {
                p_count++;
                break;
            }
        }
    } while (!file.eof());
    if ((s_count >= 2) && (t_count >= 2) && (u_count >= 1) && (d_count >= 1) && (e_count >= 1) && (n_count >= 1) && (h_count >= 1) && (i_count >= 1) && (p_count >= 1)) {
        cout << "There are all letters from 'studentship' ";
    } else {
        cout << "There are not all letters from 'studentship'";
    }
    return 0;
}
