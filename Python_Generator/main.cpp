#include <iostream>
#include <stdlib.h>
 
#include "page_saver.hpp"
 
int main(int argc, char* argv[])
{
    std::string arg1 = argv[1];
    std::string arg2 = argv[2];
    page_saver p;
    std::string scr_path = p.generate_python_script(arg1, arg2);
    const char* scr = scr_path.c_str();
    system(scr);
    return 0;
}