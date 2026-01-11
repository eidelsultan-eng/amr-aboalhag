#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

// Set console output to UTF-8 for Arabic support
void setupConsole() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}

int main() {
    setupConsole();
    
    cout << "========================================" << endl;
    cout << "   مكتب الفتح للاستثمار العقاري  " << endl;
    cout << "      المهندس/ عمرو ابوالحاج  " << endl;
    cout << "       رقم الهاتف 01061899703  " << endl;
    cout << "========================================" << endl;

    double x, y, z;
    double e, r, i;
    double s = 0, s2 = 0;

    cout << "\n--- المثلث الأول ---" << endl;
    cout << "ادخل الحد البحري او الحد القبلي: ";
    cin >> x;
    cout << "ادخل الحد الشرقي او الحد الغربي: ";
    cin >> y;
    cout << "ادخل طول الوتر: ";
    cin >> z;

    s = (x + y + z) / 2;
    double area1 = sqrt(s * (s - x) * (s - y) * (s - z));
    cout << "مساحة المثلث الاول: " << area1 << " م²" << endl;

    cout << "\n--- المثلث الثاني ---" << endl;
    cout << "ادخل الحد البحري او الحد القبلي: ";
    cin >> e;
    cout << "ادخل الحد الشرقي او الحد الغربي: ";
    cin >> r;
    cout << "ادخل طول الوتر: ";
    cin >> i;

    s2 = (e + r + i) / 2;
    double area2 = sqrt(s2 * (s2 - e) * (s2 - r) * (s2 - i));
    cout << "مساحة المثلث الثاني: " << area2 << " م²" << endl;

    cout << "\n========================================" << endl;
    cout << "المساحه الكليه: " << (area1 + area2) << " م²" << endl;
    cout << "========================================" << endl;

    cout << "\nاضغط اي مفتاح للخروج..." << endl;
    system("pause > nl");

    return 0;
}
