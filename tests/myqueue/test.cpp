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
	Queue.Enable = 1;
	Queue.Init(100);

	while(Queue.State_Get() & MYQUEUE_STATE_FULL)
		Queue.Insert(1000);

    CHECK_EQUAL(Queue.State_Get(), 11);
}

// Test null array
TEST(average_test_group, null_test)
{
	MyQueue Queue;
	Queue.Enable = 1;
	Queue.Init(100);

	CHECK_EQUAL(Queue.State_Get(), 7);
}
