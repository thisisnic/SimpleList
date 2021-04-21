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
    cout << "\n\n\n\n\n\n\n\n";
    cout << "***********************\n";
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to list.\n";
    cout << " 3 - Delete from list.\n";
    cout << " 4 - Quit.\n";
    cout << "Enter your choice and press return: ";

    cin  >> choice;

    if(choice == 4){
        exit(0);
    } else if (choice == 2){
        add_item();
    } else if (choice == 1){
        print_list();
    } else if(choice == 3){
        delete_item();
    } else {
        cout << "Sorry, choice not implemented yet\n";
    }

}

void add_item(){
    cout << "\n\n\n\n\n\n\n\n";
    cout << "*** Add item ***\n";
    cout << "Type in an item and press enter: ";
    string item;
    // capture the output from the console and put it into variable 'item'
    cin >> item;

    // push back an item into our vector list (i.e. to the bottom of our vector, )
    list.push_back(item);

    cout << "Successfully added an item to the list! \n\n\n\n\n";
    cin.clear();
    print_menu(name);
}

void delete_item(){
    cout << "\n\n\n\n\n\n\n\n";
    cout << "*** Delete item ***\n";
    cout << "Select an item index number to delete\n";
    if (list.size()){
        for(int i = 0; i < list.size(); i++){
            cout << i <<  ": " << list[i] << "\n";
        }
    } else {
        cout << "No items to delete. \n";
    }

    print_menu(name);

}

void print_list(){
    cout << "\n\n\n\n\n\n\n\n";
    cout << "*** Printing list ***\n";

    for(int list_index = 0; list_index < list.size(); list_index++){
        cout << " * " << list[list_index] << "\n";
    }

    cout << "M - Menu \n";
    char choice;
    cin >> choice;

    if(choice == 'M' || choice == 'm'){
        print_menu(name);
    } else {
        cout << "Invalid Choice. Quitting..\n";
    }

}