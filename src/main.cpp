#include "include/list.h"

// gets a count of arguments from the terminal and the actual text
int main(int arg_count, char *args[]){

    // if we've been passed any arguments
    if(arg_count > 1){
        List simpleList;
        // 0 argument is name of program hence why this is 1
        // we convert the argument to a string and store it in name which has been defined in the global scope
        simpleList.name = string(args[1]);
        simpleList.print_menu();
    } else {
        cout << "No arguments supplied!" << endl;
    }

    // return 0 to show has successfully ran 
    return 0;
}
