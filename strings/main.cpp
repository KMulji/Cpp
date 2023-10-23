#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{

    char s[10];
    char x[150];
    /*
       This first way allows you to read a string. However if there is a space it will only read
       things before the space.
   */
    std::cout << "Enter Your Name: ";
    std::cin >> s;
    std::cin.ignore();
    std::cout << "Enter a chunk of text:";
    /*
        This second way allows you to read a string with spaces. you can also use get()
    */
    std::cin.getline(x, 100);
    std::cout << s << std::endl;
    std::cout << x << std::endl;

    /*
        You can use strlen from the cstring library to get the length of a string
    */

    std::cout << "The length of your name is: " << strlen(s) << std::endl;
    /*
        To concatenae two strings you can use strcat function strcat(destination,source). it combines
        the two and stores in destination. There is also strncat(destination,source,length). it will pick
        the len characters from source.
    */
    strcat(x, s);
    std::cout << "Concat is: " << x << std::endl;
    /*
        to copy you can use strcpy(destination,source), you can also use strncpy(destination,source,n)
    */
    char a[30] = "";
    char b[30] = "Kyan";
    strcpy(a, b);
    std::cout << "After copy:" << a << std::endl;
    /*
         you can use strstr(main,sub) to search for sub in main. It will return the sub along with all the chars after sub.
    */
    char c[30] = "helloworldsssss";
    char d[30] = "world";

    std::cout << strstr(c, d) << std::endl;
    /*
        you can use strchr(main,char) to find a occurence of a char in a string.
        there is also strrchr(main,char) which finds the occurence of char from the end of a string. this will return
        the char followed by all the characters.
    */
    char e[40] = "Programming";

    std::cout << strchr(e, 'm') << std::endl;
    std::cout << strrchr(e, 'm') << std::endl;
    /*
        you can use strcmp to compare two strings, strcmp(a,b), if a<b it returns a negative value, if they are equal it will return
        0 and if a>b it will return a positive number.
    */
    std::cout << strcmp("def", "abc") << std::endl;
    /*
        strtol(str1,NULL,base) converts a string to a long int.
        strtof(str1,NULL) converts a string to a float.
    */
    char g[20] = "123";
    char u[20] = "23.522";

    long int z = strtol(g, NULL, 10);
    float zx = strtof(u, NULL);

    /*
        To tokenise a string you can use strtok(str,delimiters);
    */
    char xs[30] = "x=10;y=20;z=35";

    char *token = strtok(xs, ";");
    while (token != NULL)
    {
        std::cout << token << std::endl;
        token = strtok(NULL, ";");
    }
    /*
        this is a example of c++ class string.
    */
    std::cout << token << std::endl;
    std::cin.ignore();
    std::string x5;
    getline(std::cin, x5);
    std::cout << "text is" << x5 << std::endl;

    /*
        the string class has the following functions
        1. s.length() -> returns the numbe rof chars in a string
        2. s.size() -> returns the number of chars in a string.
        3. s.capacity() -> Returns the size of the storage space currently allocated in the Memory for that string object
        4. s.resize(30) -> resize the string
        5. s.max_size() ->returns the maximum length/size the string can reach.
        6. s.clear() -> this will clear the contents of the string.
        7. s.empty() -> check if a string is empty
    */

    /*
     Additional functions include
     1. s.append("something") -> add something at the end of the string.
     2. s.insert("kk",3) -> insert kk at index 3.
     3. s.replace(3,4,"kk") -> replaces 4 characters at index 3 with kk.
     4. s.clear() -> clear contents of string.
     5. s.push_back('z') -> insert a single character at the end of the string.
     6. s.pop_back() -> remove on character from end of a string.
     7. s1.swap(s2) -> swap two strings.
    */
    /*
     some other functions include
        1. s.copy(char dest[],no of chars) -> copy a string into a character array.
            you must manually insert \0 at the end of array.
        2. s.find(string/char)-> find a string or char in the string. Returns index
        3. s.rfind(string/char) -> find a string or char starting from end of the string. returns index
        4. s.find_first_of(char,index(optional)) -> find the index of a first occurence of a character.
        5. s.find_last_of(char,index(optional)) -> find the index of last occurence of a character.
    */

    return 0;
}