#include "CppUTest/TestHarness.h"

#include "myqueue.hpp"


// Create a test group
TEST_GROUP(average_test_group)
{
    void setup()
    {
        // Initialize before each test
    }
    
    void teardown()
    {
        // Deinitialize after each test
    }
};

// Test the average function
TEST(average_test_group, simple_test)
{
	MyQueue Queue;
	Queue.Init();

    CHECK_EQUAL(Queue.Average_Get, 0);
}
