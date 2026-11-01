
#include <iostream>
using namespace std;

class Candidate {
protected:
    int id;
    double attendance;

public:
    Candidate(int i, double a) {
        id = i;
        attendance = a;
    }
};

class RegularCandidate : public Candidate {
public:
    RegularCandidate(int i, double a) : Candidate(i, a) {}

    void checkEligibility() {
        cout << "Regular Candidate ID: " << id << endl;

        if (attendance >= 75)
            cout << "Eligible for examination" << endl;
        else
            cout << "Not eligible for examination" << endl;
    }
};

class ReappearCandidate : public Candidate {
public:
    ReappearCandidate(int i, double a) : Candidate(i, a) {}

    void checkEligibility() {
        cout << "Reappear Candidate ID: " << id << endl;

        if (attendance >= 60)
            cout << "Eligible for examination" << endl;
        else
            cout << "Not eligible for examination" << endl;
    }
};

int main() {
    RegularCandidate r(101, 80);
    ReappearCandidate p(102, 65);

    r.checkEligibility();
    p.checkEligibility();

    return 0;
}
