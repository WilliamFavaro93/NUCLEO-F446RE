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

	CHECK_EQUAL(Queue.State_Get(), (MYQUEUE_STATE_INIT|MYQUEUE_STATE_ENABLE|MYQUEUE_STATE_EMPTY));

	while(Queue.State_Get() & MYQUEUE_STATE_FULL)
		Queue.Insert(1000);

    CHECK_EQUAL(Queue.State_Get(), (MYQUEUE_STATE_INIT|MYQUEUE_STATE_ENABLE|MYQUEUE_STATE_FULL));
}

// Test null array
//TEST(average_test_group, null_test)
//{
//    float array[1];
//    float avg = average(array, 0);
//    CHECK_EQUAL(avg, 0.0);
//}
