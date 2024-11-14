#include <iostream>
#include <string>

class LibraryBook {
private:
    int availableCopies; 
public:
    std::string title; 
    std::string author; 
    long ISBN; 
    void setCopies(int copies) {
        availableCopies = copies;
    }
    int getCopies() {
        return availableCopies;
    }
    void displayDetails() {
        std::cout << "\nBook Details:" << std::endl;
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "ISBN: " << ISBN << std::endl;
        std::cout << "Available Copies: " << availableCopies << std::endl;
    }
};
int main() {
    LibraryBook book;
    std::cout << "Let's catalog a new book for the library!" << std::endl;
    std::cout << "Enter the title of the book: ";
    std::getline(std::cin, book.title);
    std::cout << "Enter the author of the book: ";
    std::getline(std::cin, book.author);
    std::cout << "Enter the ISBN number of the book: ";
    std::cin >> book.ISBN;
    std::cout << "Enter the number of available copies: ";
    int copies;
    std::cin >> copies;
    book.setCopies(copies);
    book.displayDetails();
    return 0;
}

