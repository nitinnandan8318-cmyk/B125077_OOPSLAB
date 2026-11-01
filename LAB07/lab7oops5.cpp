
#include <iostream>
using namespace std;

class Sensor {
protected:
    int sensorID;

public:
    Sensor(int id) {
        sensorID = id;
    }
};

class Temperature : virtual public Sensor {
protected:
    float temp;

public:
    Temperature(int id, float t) : Sensor(id) {
        temp = t;
    }
};

class Humidity : virtual public Sensor {
protected:
    float humidity;

public:
    Humidity(int id, float h) : Sensor(id) {
        humidity = h;
    }
};

class FarmMonitor : public Temperature, public Humidity {
public:
    FarmMonitor(int id, float t, float h)
        : Sensor(id), Temperature(id, t), Humidity(id, h) {}

    void display() {
        cout << "Sensor ID: " << sensorID << endl;
        cout << "Temperature: " << temp << " C" << endl;
        cout << "Humidity: " << humidity << "%" << endl;

        if (temp > 35 || humidity > 80)
            cout << "Warning: Unsafe Farm Conditions!" << endl;
        else
            cout << "Farm Conditions Normal" << endl;
    }
};

int main() {
    FarmMonitor f(101, 38, 85);
    f.display();

    return 0;
}
