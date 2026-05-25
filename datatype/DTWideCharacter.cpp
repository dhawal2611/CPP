#include <iostream>
using namespace std;

int main() {
    // Single wide character declaration
    wchar_t wide_char = L'A'; 
    
    // Wide character string declaration
    wchar_t wide_string[] = L"Hello, Dhawal"; 

    // Output using the wide stream
    wcout << L"Character: " << wide_char << endl;
    wcout << L"String: " << wide_string << endl;

    // Displaying the memory footprint
    wcout << L"Size of wchar_t: " << sizeof(wchar_t) << L" bytes" << endl;

    return 0;
}

