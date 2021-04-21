#include <iostream>
#include <vector>
using namespace std;

class List{
    // can only be accessed by this class 
    private:

    // can only be accessed by the class or anything that inherits from it
    protected:
    
    // can be accessed by any outside classes or source files
    public:
    // constructor
    List(){

    }
    // destructor
    ~List(){

    }

    vector<string> list;
    string name;

    void print_menu();
    void print_list(int times);
    void add_item();
    void delete_item();
};