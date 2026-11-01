
#include <iostream>
using namespace std;

class Scholarship {
public:
    virtual double calculateAward(double marks,
                                  double familyIncome) {
        return 0;
    }
};

class MeritScholarship : public Scholarship {
public:
    double calculateAward(double marks,
                           double familyIncome) override {
        if (marks >= 90)
            return 20000;
        else if (marks >= 80)
            return 10000;
        else
            return 0;
    }
};

class NeedBasedScholarship : public Scholarship {
public:
    double calculateAward(double marks,
                           double familyIncome) override {
        if (familyIncome < 200000 && marks >= 70)
            return 25000;
        else
            return 0;
    }
};

int main() {
    MeritScholarship merit;
    NeedBasedScholarship need;

    Scholarship *ptr;

    ptr = &merit;
    cout << "Merit Scholarship: Rs. "
         << ptr->calculateAward(92, 150000) << endl;

    ptr = &need;
    cout << "Need-Based Scholarship: Rs. "
         << ptr->calculateAward(92, 150000) << endl;

    return 0;
}
