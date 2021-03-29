#include "LongLong.h"
int main()
{
    LongLong A, B;

    cout << "Number of elements of class LongLong : " << Object::Count() << endl;

    cout << "\nLongLong1" << endl;
    cin >> A;
    cout << A;

    cout << "A++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;
    cout << "\nLongLong2" << endl;

    cin >> B;
    cout << B;

    if (A > B) { cout << "A>B" << endl; }
    else { cout << "A!>B" << endl; }
    if (A < B) { cout << "A<B" << endl; }
    else { cout << "A!<B" << endl; }
    if (A == B) { cout << "A=B" << endl; }
    else { cout << "A!=B" << endl; }




    return 0;
}