#include <boost/format.hpp>
#include <iostream>

int main()
{
  std::cout << boost::format{"%1% %2% %1%"} %
    boost::io::group(std::showpos, 1) % 2 << '\n';
}