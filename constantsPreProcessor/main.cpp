#include <iostream>
/*
    1. constant variables -> you can declare a variable as const to prevent it
    from being modified. e.g const x=10;
    2. constant pointers -> you can have a constant pointer. you cannot modify what the pointer
    is pointing to.
        int x=10;
        int const* z = &x;
        here you can make z point to something else but you cannot change it.
    3. int * const ptr = &x;
        witht this pointer you cannot change where it is pointing to. but you can change the data.
    4. const int * const ptr = &x; -> you cannot change the data and also cannot change where it is pointing to.

*/
/*
    Constant Functions
    void Display() const -> if you want a function that is not allowed to modify values of a class make it const.
    void View(const int &x, int &y) -> const on parameters using call by reference will not be changed. 
*/
/*
    Preprocessor Directives/Macros
    1. #define PI 3.142 -> #define is used for defining constants. we can also use it to shorten syntax by changing object names
        e.g #define c cout
    2. we can also write functions. like #define SQR(x)(x*x)
    3. #define MSG(X) #X -> this will convert x to a string ""
    4. #ifndef PI
            #define PI 3.142
       #endif
Namespaces -> we can use namespaces to group common things together and to resolve name
conflicts.
*/

int main(){

    return 0;
}