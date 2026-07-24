/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 24/7/2026
 *
 *
 * Project: Library Management System
 * 
 * Background & System Flow:
 * - The system helps add books and search for them, while maintaining information about borrowed books.
 * - The main user is an admin who performs operations without needing login/logout functionalities.
 * - The system runs on a loop where it shows a menu, the admin selects a choice, the operation is performed, and the menu is listed again.
 * 
 * Main Menu Choices:
 * 1) add_book
 * 2) search_books_by_prefix
 * 3) print_who_borrowed_book_by_name
 * 4) print_library_by_id
 * 5) print_library_by_name
 * 6) add_user
 * 7) user_borrow_book
 * 8) user_return_book
 * 9) print_users
 * 10) Exit
 * 
 * Book Operations:
 * - Adding a book: Requires an integer ID, a name, and a quantity (e.g., 101, CppHowToProgram, 7).
 * - Searching for a book: Allows searching the system using a book name prefix, returning all matches starting with those letters.
 * - Listing books: Displays all books in the system, with the ability to sort them either by their IDs or by their Names.
 * - Listing borrowers: Takes a book name as input and outputs a list of the user names who have currently borrowed that book.
 * 
 * User Operations:
 * - Adding a user: Requires an integer Id and a name.
 * - Borrowing a book: The admin enters a user name and book name. If the book quantity is > 0, the system marks that the user borrowed a copy and decreases the quantity by 1. If there are no available copies, the system notifies the admin.
 * - Returning a book: The system does the reverse of borrowing by marking that the user returned a copy and incrementing the current quantity.
 * - Data Integrity Note: Anytime the system lists books, the overall data should reflect these borrow/return changes correctly.
 */

#include <iostream>
#include <string>

using namespace std;

const int MAX_NO_OF_BOOKS = 15;
const int MAX_NO_OF_USERS = 15;

struct book {
    string name;
    string borrowers[MAX_NO_OF_USERS] = {" "};
    int id;
    int quantity;
    int borrowed;

    book (void)                     //Defualt init
    {
        name = " ";
        id = 0;
        quantity = 0;
        borrowed = 0;
    }

    book (int _id, string _name, int _quantity)       //adding new book
    {
        name = _name;
        id = _id;
        quantity = _quantity;
        borrowed = 0;
        for (int i = 0; i < MAX_NO_OF_USERS; i++) borrowers[i] = "";
    }
};

struct user {
    string name;
    int id;
    int total_borrow = 0;
    int borrowed_id[MAX_NO_OF_BOOKS] = {0};

    user (void)
    {
        name = " ";
        id = 0;
    }

    user (int _id, string _name)
    {
        name = _name;
        id = _id;
    }
};

struct library {
    book books[MAX_NO_OF_BOOKS];
    user users[MAX_NO_OF_USERS];
    int total_books = 0;
    int total_users = 0;


    void add_book(int id, string name, int quantity)
    {
        if (total_books >= MAX_NO_OF_BOOKS)
        {
            cout << "Library is full!\n";
            return;
        }

        books[total_books] = book(id, name, quantity);
        total_books++;
    }

    void search_books_by_prefix(string prefix) 
    {
        bool found = false;

        for (int unit = 0; unit < total_books; unit++)
        {
            if(books[unit].name.find(prefix) == 0)
            {
                cout << books[unit].id << " " << books[unit].name << " " << (books[unit].quantity - books[unit].borrowed) << "\n";
                found = true;
            }
        }

        if(!found) cout << "No books found\n";
    }

    void print_library_by_id(void)
    {
        // 1. Sort the books by ID (Bubble Sort)
        for (int i = 0; i < total_books - 1; i++) 
        {
            for (int j = 0; j < total_books - i - 1; j++) 
            {
                if (books[j].id > books[j + 1].id) 
                {
                    book temp = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = temp;
                }
            }
        }

        for (int unit = 0; unit < total_books; unit++)
        {
            cout << "Id = " << books[unit].id << " ";
            cout << "name = " << books[unit].name << " ";
            cout << "quantity = " << books[unit]. quantity - books[unit].borrowed << " \n";
        }
    }

    void print_library_by_name(void)
    {
        // 1. Sort the books by name (Bubble Sort)
        for (int i = 0; i < total_books - 1; i++) 
        {
            for (int j = 0; j < total_books - i - 1; j++) 
            {
                if (books[j].name > books[j + 1].name) 
                {
                    book temp = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = temp;
                }
            }
        }

        for (int unit = 0; unit < total_books; unit++)
        {
            cout << "Id = " << books[unit].id << " ";
            cout << "name = " << books[unit].name << " ";
            cout << "quantity = " << books[unit]. quantity - books[unit].borrowed << " \n";
        }
    }

    void add_user(int id, string name)
    {
        if (total_users >= MAX_NO_OF_USERS)
        {
            cout << "Library is full!\n";
            return;
        }

        users[total_users] = user(id, name);
        total_users++;
    }

    void user_borrow_book(string user_name, string book_name)
    {
        int found = false;
        int i_book = 0;
        for ( ; i_book < total_books; i_book++)
        {
            if (books[i_book].name == book_name)
            {
                found = true;
                break;
            }
        }

        if (!found) 
        {
            cout << "The book " << book_name << " is not in the library.\n";
            return;
        }

        found = false;
        int i_user = 0;
        for ( ; i_user < total_users; i_user++)
        {
            if (users[i_user].name == user_name)
            {
                found = true;
                break;
            }
        }

        if (!found) 
        {
            cout << "The user " << user_name << " is not registerd.\n";
            return;
        }

        if (books[i_book].quantity - books[i_book].borrowed > 0)
        {
            books[i_book].borrowers[i_user] = users[i_user].name;
            books[i_book].borrowed++;
            users[i_user].borrowed_id[i_book] = books[i_book].id;
            users[i_user].total_borrow++;
        }
        else
        {
            cout << "No more books left.\n";
        }
    }

    void user_return_book(string user_name, string book_name)
    {
        int found = false;
        int i_book = 0;
        for ( ; i_book < total_books; i_book++)
        {
            if (books[i_book].name == book_name)
            {
                found = true;
                break;
            }
        }

        if (!found) 
        {
            cout << "The book " << book_name << " is not in the library.\n";
            return;
        }

        found = false;
        int i_user = 0;
        for ( ; i_user < total_users; i_user++)
        {
            if (users[i_user].name == user_name)
            {
                found = true;
                break;
            }
        }

        if (!found) 
        {
            cout << "The user " << user_name << " is not registerd.\n";
            return;
        }

        if (users[i_user].borrowed_id[i_book] == books[i_book].id)
        {
            books[i_book].borrowers[i_user] = " ";
            books[i_book].borrowed--;
            users[i_user].borrowed_id[i_book] = 0;
            users[i_user].total_borrow--;
        }
        else 
        {
            cout << user_name << " did not borrow this book.\n";
        }
    }

    void print_users(void)
    {
        for (int user = 0; user < total_users; user++)
        {
            cout << "Id = " << users[user].id<< " ";
            cout << "name = " << users[user].name << " ";
            cout << "Borrowed books id : ";
            for (int i = 0; i < MAX_NO_OF_BOOKS; i++)
            {   
                if (users[user].borrowed_id[i] != 0)
                {
                    cout << users[user].borrowed_id[i] << " ";
                }
            }

            cout << "\n";
        }
    }

    void print_who_borrowed_book_by_name(string book_name)
    {
        int i_book = 0;
        bool found = false;

        for ( ; i_book < total_books; i_book++)
        {
            if (books[i_book].name == book_name) 
            {
                found = true;
                break;
            }
        }

        if (!found) 
        {
            cout << "Invalid book name.\n";
            return;
        }

        if (books[i_book].borrowed == 0)
        {
            cout << "No one has borrowed this book.\n";
            return;
        }

        for (int i = 0; i < MAX_NO_OF_USERS; i++)
        {
            if (books[i_book].borrowers[i] != "")
            {
                cout << "- " << books[i_book].borrowers[i] << "\n";
            }
        }
    }

};

void library_menu(int &choice)
{
    cout << "Library menu: \n";
    cout << "1) add_book \n";
    cout << "2) search_books_by_prefix \n";
    cout << "3) print_who_borrowed_book_by_name \n";
    cout << "4) print_library_by_id \n";
    cout << "5) print_library_by_name \n";
    cout << "6) add_user \n";
    cout << "7) user_borrow_book \n";
    cout << "8) user_return_book \n";
    cout << "9) print_users \n";
    cout << "10) Exit \n";  
    cout << "Enter your menu choice [1-10]: ";

    cin >> choice;
}

int main(void)
{
    int choice = 0;
    library lib;

    while (choice != 10)
    {
        library_menu(choice);

        switch (choice)
        {
            case 1:
            {
                string name;
                int id, quantity;
                cout << "Enter book ID, name, and quantity: ";
                cin >> id >> name >> quantity;
                lib.add_book(id, name, quantity);
                break;
            }
            case 2:
            {
                string prefix;
                cout << "Enter book name prefix: ";
                cin >> prefix;
                lib.search_books_by_prefix(prefix);
                break;
            }
            case 3:
            {
                string book_name;
                cout << "Enter book name: ";
                cin >> book_name;
                lib.print_who_borrowed_book_by_name(book_name);
                break;
            }
            case 4:
            {
                lib.print_library_by_id();
                break;
            }
            case 5:
            {
                lib.print_library_by_name();
                break;
            }
            case 6:
            {
                string name;
                int id;
                cout << "Enter user ID and name: ";
                cin >> id >> name;
                lib.add_user(id, name);
                break;
            }
            case 7:
            {
                string user, book;
                cout << "Enter user name and book name: ";
                cin >> user >> book;
                lib.user_borrow_book(user, book);
                break;
            }
            case 8:
            {
                string user, book;
                cout << "Enter user name and book name: ";
                cin >> user >> book;
                lib.user_return_book(user, book);
                break; 
            }
            case 9:
            {
                lib.print_users();
                break;
            }
            case 10:
            {
                cout << "Exiting...\n";
                break;
            }
            default:
            {
                cout << "Invalid choice! Please enter a number between 1 and 10.\n";
            }
        }
    }
    
    return 0;
}