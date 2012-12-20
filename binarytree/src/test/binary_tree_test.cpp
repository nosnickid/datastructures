#include <cppunit/ui/text/TestRunner.h>

#include "binary_tree_test.h"

int main( int argc, char **argv)
{
    CppUnit::TextUi::TestRunner runner;
    runner.addTest( sd::BinaryTreeTest::suite() );
    runner.run();
    return 0;
}

