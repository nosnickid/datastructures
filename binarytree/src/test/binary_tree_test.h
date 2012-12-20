#include <cppunit/extensions/HelperMacros.h>
#include <string>
#include "../binary_tree.h"

namespace sd {

class BinaryTreeTest: public CPPUNIT_NS::TestFixture {
public:

    void testConstruct() {
        CPPUNIT_ASSERT ( new BinaryTree<int>() != 0);
    }

    void testCountIncreasesWhenValueAdded() {
        BinaryTree<int> tree;

        tree.add(1);

        CPPUNIT_ASSERT_EQUAL(1, tree.getNodeCount());

        tree.add(2);
        tree.add(5);
        
        CPPUNIT_ASSERT_EQUAL(3, tree.getNodeCount());
    }

    void testIsValuePresent() {
        BinaryTree<int> tree;

        tree.add(5);
        tree.add(6);
        tree.add(58);
        tree.add(12);
        tree.add(30);
        tree.add(32);
        tree.add(16);

        CPPUNIT_ASSERT(tree.isValuePresent(5));
        CPPUNIT_ASSERT(tree.isValuePresent(6));
        CPPUNIT_ASSERT(tree.isValuePresent(58));
        CPPUNIT_ASSERT(tree.isValuePresent(12));
        CPPUNIT_ASSERT(tree.isValuePresent(30));
        CPPUNIT_ASSERT(tree.isValuePresent(32));


        CPPUNIT_ASSERT(!tree.isValuePresent(29));
        CPPUNIT_ASSERT(!tree.isValuePresent(4));
    }

    CPPUNIT_TEST_SUITE(BinaryTreeTest);
    CPPUNIT_TEST( testConstruct );
    CPPUNIT_TEST( testCountIncreasesWhenValueAdded );
    CPPUNIT_TEST (testIsValuePresent );
    CPPUNIT_TEST_SUITE_END();

};

};


