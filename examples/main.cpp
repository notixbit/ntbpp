#include <notixbit.h>
using namespace Ntb::Types;
using namespace Ntb::Templates;
using namespace Ntb::Colors;

int main()
{
  // Colors
  std::cout 
    << col("Notixbit Creative", Colors::WHITE, Colors::RED) 
    << std::endl << std::endl 
    << col("====POLICE==LINE==DO==NOT==CROSS====", Colors::BLACK, Colors::YELLOW) 
    << std::endl << std::endl;

  // Templates & Types
  Vector<String> testVector = { "TestVal", "TestVal2" };

  StringMap testStringMap = {
      {"TestKey", "TestVal"},
      {"TestKey2", "TestVal2"}
  };

  std::cout << testStringMap << std::endl;

  return 0;
}
