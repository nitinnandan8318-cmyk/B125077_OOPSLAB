//multilevel inheritance 
#include <iostream>
using namespace std;

class Image {
protected:
    int width, height;

public:
    Image(int w, int h) {
        width = w;
        height = h;
    }
};

class CompressedImage : public Image {
protected:
    double compression;

public:
    CompressedImage(int w, int h, double c)
        : Image(w, h) {
        compression = c;
    }
};

class EncryptedImage : public CompressedImage {
    string algorithm;

public:
    EncryptedImage(int w, int h, double c, string a)
        : CompressedImage(w, h, c) {
        algorithm = a;
    }

    void display() {
        int original = width * height;
        double effective = original * compression / 100;

        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Original Pixels: " << original << endl;
        cout << "Compression: " << compression << "%" << endl;
        cout << "Effective Pixel Size: " << effective << endl;
        cout << "Encryption: " << algorithm << endl;
    }
};

int main() {
    EncryptedImage img(1920, 1080, 50, "AES");

    img.display();

    return 0;
}
