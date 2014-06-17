#include <fstream>
#include <stdio.h>
 
#include "page_saver.hpp"
 
std::string page_saver::generate_python_script(const std::string& url, const std::string& path)
{
    std::ofstream ss;
    std::string page(path + ".html");
    std::string path_name(path + ".py");
    const char* p = path_name.c_str();
    ss.open(p);
    ss << "import urllib.request \n"
      << "file = urllib.request.urlopen(" << "\"" << url << "\"" << ")\n"
      << "s = file.read()\n"
      << "f = open(" << "\"" << page
      << "\", 'wb') \n"
      <<"f.write(s)\n"
      << "f.close()\n";
      return p;
}