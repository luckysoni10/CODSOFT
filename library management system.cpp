#include <iostream>
#include <string>
using namespace std;
const int MAX_BOOKS=100;
const int MAX_BORROWERS=50;
const int MAX_TRANSACTIONS=100;
class Book{
public:
    string title;
    string author;
    string ISBN;
    bool available;
    Book() : available(true) {}
};
class Borrower {
public:
    string name;
    int borrowerID;
};
class Library {
private:
    Book books[MAX_BOOKS];
    Borrower borrowers[MAX_BORROWERS];
    int bookCount;
    int borrowerCount;
    public:
    Library() : bookCount(0), borrowerCount(0) {}
    void addBook(string title, string author, string ISBN) {
        if (bookCount < MAX_BOOKS) {
            books[bookCount].title = title;
            books[bookCount].author = author;
            books[bookCount].ISBN = ISBN;
            bookCount++;
            cout << "Book added successfully!\n";
        } else {
            cout << "Library is full. Cannot add more books.\n";
        }
    }
    void addBorrower(string name, int borrowerID) {
        if (borrowerCount < MAX_BORROWERS) {
            borrowers[borrowerCount].name = name;
            borrowers[borrowerCount].borrowerID = borrowerID;
            borrowerCount++;
            cout << "Borrower added successfully!\n";
        } else {
            cout << "Borrower capacity reached. Cannot add more borrowers.\n";
        }
    }
    void displayBooks() {
        cout << "Library Books:\n";
        for (int i = 0; i < bookCount; ++i) {
            cout << "Title: " << books[i].title << "\tAuthor: " << books[i].author << "\tISBN: " << books[i].ISBN;
            cout << "\tStatus: " << (books[i].available ? "Available" : "Checked Out") << endl;
        }
    }
    void searchBooks(string searchTerm) {
        for (int i = 0; i < bookCount; ++i) {
            if (books[i].title.find(searchTerm) != string::npos ||
                books[i].author.find(searchTerm) != string::npos ||
                books[i].ISBN.find(searchTerm) != string::npos) {
                cout << "Title: " << books[i].title << "\tAuthor: " << books[i].author << "\tISBN: " << books[i].ISBN;
                cout << "\tStatus: " << (books[i].available ? "Available" : "Checked Out") << endl;
            }
        }
    }
};
int main() {
    Library library;
    int choice;
    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Add Borrower\n";
        cout << "3. Display Books\n";
        cout << "4. Search Books\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                string title, author, ISBN;
                cout << "Enter book title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter author name: ";
                getline(cin, author);
                cout << "Enter ISBN: ";
                getline(cin, ISBN);
                library.addBook(title, author, ISBN);
                break;
            }
            case 2: {
                string name;
                int borrowerID;
                cout << "Enter borrower name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter borrower ID: ";
                cin >> borrowerID;
                library.addBorrower(name, borrowerID);
                break;
            }
            case 3:
                library.displayBooks();
                break;
            case 4: {
                string searchTerm;
                cout << "Enter search term: ";
                cin.ignore();
                getline(cin, searchTerm);
                library.searchBooks(searchTerm);
                break;
            }
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);
    return 0;
}
