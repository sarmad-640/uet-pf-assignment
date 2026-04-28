#include <iostream>
#include <cmath>
using namespace std;

void quadratic_formula(float a, float b, float c)
{
 float det = (b * b) - (4 * a * c);
    float root1, root2;
    if (det == 0)
    {
        cout << "One root:------";
        root1 = -b / (2 * a);
        root2 = root1;
        cout << "Solutions: " << endl;
        cout << "x: " << root1 << endl;
    }
    else if (det > 0)
    {
        cout << "two roots:------";
        root1 = (-b + sqrt(det)) / (2 * a);
        root2 = (-b - sqrt(det)) / (2 * a);
        cout << "Solutions: " << endl;
        cout << "x: " << root1 << endl;
        cout << "x: " << root2;
    }
    else if (det < 0)
    {
        cout << "two complex roots:------";
        float real_part = (-b / (2 * a));
        float imaginary_part = (sqrt(-det)) / (2 * a);
        cout << "Complex Solutions: " << endl;
        cout << "x: " << real_part<<" + "<<imaginary_part<<"i" << endl;
        cout << "x: " << real_part<<" - "<<imaginary_part<<"i" << endl;
    }
}

main()
{
    float a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    quadratic_formula(a, b, c);
}
