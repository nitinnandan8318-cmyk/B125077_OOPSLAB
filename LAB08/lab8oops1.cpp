
#include <iostream>
using namespace std;

class Document {
public:
    virtual void exportFile() {
        cout << "Exporting document" << endl;
    }
};

class PDFDocument : public Document {
public:
    void exportFile() override {
        cout << "Exporting PDF file (.pdf)" << endl;
    }
};

class TextDocument : public Document {
public:
    void exportFile() override {
        cout << "Exporting Text file (.txt)" << endl;
    }
};

class CSVDocument : public Document {
public:
    void exportFile() override {
        cout << "Exporting CSV file (.csv)" << endl;
    }
};

int main() {
    PDFDocument pdf;
    TextDocument txt;
    CSVDocument csv;

    Document *ptr;

    ptr = &pdf;
    ptr->exportFile();

    ptr = &txt;
    ptr->exportFile();

    ptr = &csv;
    ptr->exportFile();

    return 0;
}
