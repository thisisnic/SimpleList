#include "include/list.h"

void List::print_menu(){
    int choice;
    cout << "\n\n\n";
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
        print_list(0);
    } else if(choice == 3){
        delete_item();
    } else {
        cout << "Sorry, choice not implemented yet\n";
        cin.clear();
        choice = 0;
        print_menu();
    }

}

void List::add_item(){
    cout << "\n\n\n";
    cout << "*** Add item ***\n";
    cout << "Type in an item and press enter: ";
    string item;
    // capture the output from the console and put it into variable 'item'
    cin >> item;
    // do this in case we have multiple words in our input; without it, we'd pass it through to the next bit
    cin.ignore(10000, '\n');
    cin.clear();
    // push back an item into our vector list (i.e. to the bottom of our vector, )
    list.push_back(item);

    cout << "Successfully added an item to the list! \n\n\n\n\n";
    
    print_menu();
}

void List::delete_item(){
    cout << "\n\n\n";
    cout << "*** Delete item ***\n";
    cout << "Select an item index number to delete\n";
    if (list.size()){
        // (int) typecasts to an integer
        for(int i = 0; i < (int)list.size(); i++){
            cout << i <<  ": " << list[i] << "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin()+choiceNum);
        cout << "Item successfully deleted! \n";

    } else {
        cout << "No items to delete. \n";
    }

    print_menu();

}

void List::print_list(int times = 0){
    // if this is the first time round
    if(times == 0){
        cout << "\n\n\n";
        cout << "*** Printing list ***\n";

        for(int list_index = 0; list_index < (int)list.size(); list_index++){
            cout << " * " << list[list_index] << "\n";
        }
    }
    
    cout << "Press 'M' to return to the menu or 'Q' to quite program. \n";
    char choice;
    cin >> choice;

    if(choice == 'M' || choice == 'm'){
        print_menu();
    } else if(choice == 'Q' || choice == 'q'){
        exit(0);
    } else {
        cout << "Invalid Choice.";
        cin.clear();
        print_list(times=1);
    }

}