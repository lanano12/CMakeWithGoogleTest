# CMakeWithGoogleTest

A stupidly simple library to demonstrate CMake (Libraries, Interfaces, Executables and Tests) and some GoogleTest/GoogleMock unit and integration tests.

## Usage
To build:
~~~
mkdir build
cd build
cmake ..
make
~~~~

To run the test suite with visibility of each test result:
~~~~
test/TestExample/TestExample
~~~~

To run with a summary pass or fail:
~~~
make test
~~~~