#ifndef PAGE_SAVER_HPP
#define PAGE_SAVER_HPP
 
#include <string.h>
 
class page_saver
{
public:
    page_saver(){}
    std::string generate_python_script(const std::string& url, const std::string& path);
    page_saver(const page_saver& p);
    page_saver& operator=(const page_saver& p);
};
 
#endif