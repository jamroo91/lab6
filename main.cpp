#include <iostream>
#include <string>
using namespace std;

void zapamietajDane(string& nazwisko, int& wiek) {
    cout << "Podaj nazwisko studenta: ";
    cin >> nazwisko;
    cout << "Podaj wiek studenta: ";
    cin >> wiek;
}


class Student {
public:
    string nazwisko;
    int wiek;
    
    void wypiszDane() {
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Wiek: " << wiek << endl;
    }
};

int main() {
    
    Student student1, student2;
    
    
    zapamietajDane(student1.nazwisko, student1.wiek);
    zapamietajDane(student2.nazwisko, student2.wiek);
    
    
    cout << "Dane studenta 1:" << endl;
    student1.wypiszDane();
    
    cout << endl;
    
    cout << "Dane studenta 2:" << endl;
    student2.wypiszDane();
    
    cout << endl;
    
    
    cout << "Wprowadz swoje dane:" << endl;
    zapamietajDane(student1.nazwisko, student1.wiek);
    
    
    cout << endl;
    cout << "Dane studenta 1:" << endl;
    student1.wypiszDane();
    
    cout << endl;
    
    cout << "Dane studenta 2:" << endl;
    student2.wypiszDane();
    
    return 0;
}