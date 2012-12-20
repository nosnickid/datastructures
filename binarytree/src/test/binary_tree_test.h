#include <cppunit/extensions/HelperMacros.h>
#include <string>
#include "../binary_tree.h"

namespace sd {

class BinaryTreeTest: public CPPUNIT_NS::TestFixture {
public:

    void testConstruct() {
        CPPUNIT_ASSERT ( new sd::BinaryTree<int>() != 0);
    }

    CPPUNIT_TEST_SUITE(BinaryTreeTest);
    CPPUNIT_TEST( testConstruct );
    CPPUNIT_TEST_SUITE_END();

};

};
