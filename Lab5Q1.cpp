#include <iostream>
#include <string>

// Base Class: Core catalog information
class Book {
protected:
    std::string title;
    std::string author;
    double price;

public:
    Book(std::string t, std::string a, double p) : title(t), author(a), price(p) {}

    // Core formatting routine
    void displayCoreDetails() const {
        std::cout << "Title: " << title << "\nAuthor: " << author << "\nBase Price: $" << price << "\n";
    }
};

// Derived Class: Single Inheritance
class EBook : public Book {
private:
    double fileSizeMB;
    std::string fileFormat;

public:
    EBook(std::string t, std::string a, double p, double size, std::string format)
        : Book(t, a, p), fileSizeMB(size), fileFormat(format) {}

    void displayCatalogListing() const {
        displayCoreDetails(); // Reusing the core formatting routine
        std::cout << "File Size: " << fileSizeMB << " MB\nFormat: " << fileFormat << "\n";
    }
};

int main() {
    std::cout << "--- 1) Single Inheritance Demo ---\n";
    EBook myEbook("C++ Core Guidelines", "Bjarne Stroustrup", 45.99, 12.4, "PDF");
    myEbook.displayCatalogListing();
    return 0;
}
