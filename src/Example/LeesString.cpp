/**********************************************
 * Lees examples
 **********************************************/
#include <iostream>
#include <string>


#include "LeesString.h"

namespace LeesString 
{
    std::string LeesString::sayhello() const 
    {  
        return "Hello";
    }


    void LeesString::countCharacters()  
    {
        std::string str = "Hello, World!";
        char target = 'l';
        int count = 0;

        for (char c : str) {
            if (c == target) {
                count++;
            }
        }

        std::cout << "The character '" << target << "' appears " << count << " times." << std::endl;
    }

}
