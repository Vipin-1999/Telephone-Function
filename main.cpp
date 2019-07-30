#include "telephone.h"

using namespace std;

int main()      {
    Telephone t;
    std::string number;
    number = t.Random(1, "91", "80");
    cout << number << " : " << t.Validate(number) << endl;
    return 0;
}