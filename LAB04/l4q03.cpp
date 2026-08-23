#include <iostream>
#include <string>
using namespace std;
class Camera {
    string brand;
    string model;
    int megapixels;
    int storageCapacity;
public:
    Camera(string b, string m, int mp, int storage) {
        brand = b;
        model = m;
        megapixels = mp;
        storageCapacity = storage;
    }
    friend void compareCamera(Camera c1, Camera c2);
};
void compareCamera(Camera c1, Camera c2) {
    Camera better = c1;
    if (c2.megapixels > c1.megapixels) {
        better = c2;
    }
    else if (c2.megapixels == c1.megapixels &&
             c2.storageCapacity > c1.storageCapacity) {
        better = c2;
    }
    cout<<"Better Camera:"<<endl<<"Brand: "<<better.brand<< endl<<"Model: "<<better.model<<endl<<"Megapixels: "<<better.megapixels<<endl<<"Storage Capacity: "<<endl<< better.storageCapacity<<" GB"<<endl;
}
int main() {
    Camera c1("Canon", "EOS 200D", 24, 128);
    Camera c2("Sony", "Alpha A6400", 24, 256);
    compareCamera(c1, c2);
    return 0;
}