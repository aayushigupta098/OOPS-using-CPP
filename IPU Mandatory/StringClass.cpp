
#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;
class String {
    char* s;
public:
    String() {
        s = new char[1];
        s[0] = '\0';
    }
    String(const String& x) {
        s = new char[strlen(x.s) + 1];
        strcpy(s, x.s);
    }
    void input() {
        string temp;
        getline(cin, temp);
        delete[] s;
        s = new char[temp.length() + 1];
        strcpy(s, temp.c_str());
    }
    String operator+(const String& x) {
        String t;
        delete[] t.s;
        t.s = new char[strlen(s) + strlen(x.s) + 1];
        strcpy(t.s, s);
        strcat(t.s, x.s);
        return t;
    }
    String& operator=(const String& x) {
        if (this != &x) {
            delete[] s;
            s = new char[strlen(x.s) + 1];
            strcpy(s, x.s);
        }
        return *this;
    }
    bool operator<=(const String& x) {
        return strcmp(s, x.s) <= 0;
    }
    void length() {
        cout << "Length: " << strlen(s) << endl;
    }
    void toLower() {
        for (int i = 0; s[i] != '\0'; i++)
            s[i] = tolower((unsigned char)s[i]);
    }
    void toUpper() {
        for (int i = 0; s[i] != '\0'; i++)
            s[i] = toupper((unsigned char)s[i]);
    }
    void display() {
        cout << s << endl;
    }
    ~String() {
        delete[] s;
    }
};
int main() {
    String s1, s2, s3;
    cout << "Enter first string: ";
    s1.input();
    cout << "Enter second string: ";
    s2.input();
    cout << "First string: ";
    s1.display();
    cout << "Second string: ";
    s2.display();
    s3 = s1 + s2;
    cout << "Concatenation: ";
    s3.display();
    s3 = s1;
    cout << "Copied string: ";
    s3.display();
    if (s1 <= s2)
        cout << "First string is less than or equal to second string\n";
    else
        cout << "First string is greater than second string\n";
    s1.length();
    s1.toLower();
    cout << "Lowercase: ";
    s1.display();
    s1.toUpper();
    cout << "Uppercase: ";
    s1.display();
    return 0;
}
