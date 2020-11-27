/**********************************************
 * Copyright (c) 2020 Isotropic Systems Limited
 **********************************************/
#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <string>

namespace Example {
/**
 * Example is a stupidly simple demonstration class to run GoogleTest against
 */
class Example
{
public:
    /**
     * Returns a static string. No not very useful!
     * @return A string that the unit test can test for
     */
    std::string text() const; 
};

}
#endif // EXAMPLE_H