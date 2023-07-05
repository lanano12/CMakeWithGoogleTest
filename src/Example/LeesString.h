/**********************************************
 * Written by LEE
 **********************************************/
#ifndef LEESSTRING_H
#define LEESSTRING_H

#include <string>

namespace LeesString {
/**
 * LeesString is a demonstration class to run GoogleTest against
 */
class LeesString
{
public:
    /**
     * Returns a static string. No not very useful!
     * @return A string that the unit test can test for
     */
    std::string sayhello() const; 

    void countCharacters();
};

}
#endif // LEESSTRING_H