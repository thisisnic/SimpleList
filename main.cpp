#include <iostream>
#include <vector>
using namespace std;


// define this here so we can use it inside main
// this is a prototype to declare it
void print_menu(string name);

void print_list();
void add_item();
void delete_item();

// global variable called list - it's a vector of string type
// data type always goes within angle brackets
vector<string> list;
string name;


// gets a count of arguments from the terminal and the actual text
int main(int arg_count, char *args[]){

    // if we've been passed any arguments
    if(arg_count > 1){
        // 0 argument is name of program hence why this is 1
        // we convert the argument to a string and store it in name which has been defined in the global scope
        name = string(args[1]);
        print_menu(name);
    } else {
        cout << "No arguments supplied!" << endl;
    }

    // return 0 to show has successfully ran 
    return 0;
}

void print_menu(string name){
    int choice;

    cout << "***********************\n";
    cout << " 1 = Print list.\n";
    cout << " 2 - Add to list.\n";
    cout << " 3 - Delete from list.\n";
    cout << " 4 - Quit.\n";
    cout << "Enter your choice and press return: ";

    cin  >> choice;

    if(choice == 4){
        exit(0);
    } else {
        cout << "Sorry, choice not implemented yet\n";
    }

}