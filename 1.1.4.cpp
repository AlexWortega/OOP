#include <iostream>
using namespace std;

int main() {
    string alphabet = "abcdefghijklmnopqrstuvwxyz", vowel = "aeiouy";
    char c;
    cin >> c;
    bool isEng = false, isVow = false;
    for (int i = 0; i < alphabet.length() && !isEng; i++) {
        if (c == alphabet[i]) {
            isEng = true;
        }
    }
    if (isEng) {
        for (int i = 0; i < vowel.length() && !isVow; i++) {
            if (c == vowel[i])
            {
                isVow = true;
                break;
            }
        }
        if (isVow) {
            cout << "Vowel";
        } else {
            cout << "Consonant";
        }

    } else {
        cout << "Not letter";
    }
    return 0;
}