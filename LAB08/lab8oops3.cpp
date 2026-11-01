
#include <iostream>
using namespace std;

class TrafficSignal {
public:
    virtual int getGreenDuration(int vehicleCount) {
        return 0;
    }
};

class UrbanSignal : public TrafficSignal {
public:
    int getGreenDuration(int vehicleCount) override {
        int duration = 10 + 2 * vehicleCount;

        if (duration > 60)
            duration = 60;

        return duration;
    }
};

class HighwaySignal : public TrafficSignal {
public:
    int getGreenDuration(int vehicleCount) override {
        int duration = 15 + 3 * vehicleCount;

        if (duration > 90)
            duration = 90;

        return duration;
    }
};

int main() {
    UrbanSignal urban;
    HighwaySignal highway;

    TrafficSignal *ptr;

    ptr = &urban;
    cout << "Urban Green Duration: "
         << ptr->getGreenDuration(20) << " seconds" << endl;

    ptr = &highway;
    cout << "Highway Green Duration: "
         << ptr->getGreenDuration(20) << " seconds" << endl;

    return 0;
}
