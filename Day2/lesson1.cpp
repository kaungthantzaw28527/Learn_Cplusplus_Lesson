#include <iostream>
using namespace std;

int main() {
	//Integer types
    short age = 20;
    int salary = 500000;
    long distance = 1500000L;
    long long worldPopulation = 8000000000LL;
    
    //float types
    float pi = 3.14159f;
    double exactValue = 123.45678901234;
    long double highPrecision = 123.4567890123456789L;

	//character types
    char grade = 'A';
    wchar_t wideChar = L'a';
	
	//boolean type
    bool isPassed = true;

    cout << "=== 1. Integer Types ===" << endl;
    cout << "short (Age): " << age << endl;
    cout << "int (Salary): " << salary << endl;
    cout << "long (Distance): " << distance << endl;
    cout << "long long (World Population): " << worldPopulation << endl << endl;

    cout << "=== 2. Float Types ===" << endl;
    cout << "float (Pi): " << pi << endl;
    cout << "double (Exact Value): " << exactValue << endl;
    cout << "long double (High Precision): " << highPrecision << endl << endl;

    cout << "=== 3. Character Types ===" << endl;
    cout << "char (Grade): " << grade << endl;
    wcout << L"wchar_t (Wide Char): " << wideChar << endl << endl;

    cout << "=== 4. Boolean Type ===" << endl;
    cout << "bool (Is Passed): " << isPassed << " (1 means true)" << endl;
}