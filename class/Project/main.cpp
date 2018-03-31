#include <iostream>
#include <sstream>
#include "Rolodex.h"
#include "Card.h"

using std::cout;
using std::endl;
using std::cin;


Rolodex rolo;
void preload();
void showHelp();

int main() {
    cout << "===========Rolodex program===========" << endl;

    std::ostringstream oss;
    string command;

    preload();

    // [ List | view | flip | add | remove | search | quit ]
    cout << "available commands are [ list | view | flip | add | remove | search | help | quit ]" << endl;
    while(true) {
        cout << "Enter a command: ";
        oss.str(std::string()); // clear output buffer after each command
        cin >> command;
        std::transform(command.begin(), command.end(), command.begin(), ::tolower);

        if (command == "list") {
            cout << "-----Rolodex List-----" << endl;
            cout << "First | Last | Occupation | Address | Phone" << endl;
            rolo.show(oss);
            cout << oss.str();
        } else if (command == "view") {
            Card card = rolo.getCurrentCard();
            card.show(oss);
            cout << oss.str();
        } else if (command == "flip") {
            Card card = rolo.flip();
            card.show(oss);
            cout << oss.str();
        } else if (command == "add") {
            cout << "add" << endl;
        } else if (command == "remove") {
            Card card = rolo.getCurrentCard();
            cout << "are you sure you want to remove?" << endl;
            card.show(oss);
            cout << oss.str();
            cin >> command;
            if (command == "yes") {
                rolo.remove();
                cout << "removed " << card.getFirstName() << " " << card.getLastName() << endl;
            } else {
                cout << "not removing" << endl;
            }
        } else if (command == "search") {
            string last, first;
            cout << "enter last name: ";
            cin >> last; // TODO check if toLowerr is working here
            std::transform(last.begin(), last.end(), last.begin(), ::tolower);
            cout << "enter first name: ";
            cin >> first;
            std::transform(first.begin(), first.end(), first.begin(), ::tolower);
            bool found = rolo.search(last, first);
            if (found) {
                Card found = rolo.getCurrentCard();
                found.show(oss);
                cout << oss.str();
            } else {
                cout << "contact not found" << endl;
            }
        } else if (command == "quit" || command == "exit") {
            cout << "quit" << endl;
            break;
        } else if (command == "help") {

        }
    }

}

void showHelp() {

}

/*
 * Preload the rolodex with starter data.
 * Need to look at why rolo.add( Card(...) ) doesnt work
 */
void preload() {
    cout << "Preloading rolodex with data" << endl;
    Card c1 = Card("Tony", "Hansen", "Writer", "12 E. St. NY, NY 33333 CMU", "555-9999");
    Card c2 = Card("Jon", "Smyth", "Computer Hardware", "Computer Services Pittsburgh, PA", "555-1324");
    Card c3 = Card("Alonza", "Heard", "Mechanic", "123 Anyplace Ave Malden, MA", "555-5678");
    Card c4 = Card("Jen", "Reyes", "Graphic Artist", "325 Oak rd Wilmington, MA", "555-4950");
    Card c5 = Card("Alan", "Lupine", "Vet", "1 Bigelow Ave. Lawrence, MA", "555-7654");
    Card c6 = Card("Jewel", "Proverb", "Landscaper", "34 Washington St. Waltham, MA", "555-3333");
    Card c7 = Card("Paul", "Revere", "Radical Revolutionary", "45 Commonwealth Ave. Boston, MA", "555-1776");
    Card c8 = Card("Adolf", "Coors", "Beer Manufacturer", "Boston, MA", "555-2337");
    Card c9 = Card("Seymour", "Papert", "Lego Professor", "MIT", "555-1111");
    Card c10 = Card("Fred", "Milton", "Sales", "12 Freedom Way Nashua, NH", "555-9981");
    rolo.add( c1 );
    rolo.add( c2 );
    rolo.add( c3 );
    rolo.add( c4 );
    rolo.add( c5 );
    rolo.add( c6 );
    rolo.add( c7 );
    rolo.add( c8 );
    rolo.add( c9 );
    rolo.add( c10 );
}
