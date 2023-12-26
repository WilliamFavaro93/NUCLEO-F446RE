/**
  ******************************************************************************
  * @file   myqueue.c
  * @author William Favaro
  * @date	13/04/2022
  * @brief  Queue definition functions.
  *
  ******************************************************************************
  * @note
  *
  *
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#ifndef MYQUEUE_MYQUEUE_HPP_
#define MYQUEUE_MYQUEUE_HPP_

/* Defines -------------------------------------------------------------------*/
#include <stdint.h>

/* Variables -----------------------------------------------------------------*/
const static uint16_t _Element_MaxSize = 260;

typedef enum
{
	MYQUEUE_STATE_INIT 		= 0x01,
	MYQUEUE_STATE_ENABLE 	= 0x02,
	MYQUEUE_STATE_EMPTY 	= 0x04,
	MYQUEUE_STATE_FULL 		= 0x08,
} MyQueue_State_t;

class MyQueue
{
	int32_t _Element[_Element_MaxSize];
	uint16_t _First_Index;
	uint16_t _Last_Index;

	uint16_t _Size;
	uint16_t _MaxSize;
	int64_t _Sum;
	int32_t _Average;
	uint8_t _State;
	void _Enqueue(int32_t Element);
	void _Dequeue();
	void _State_Update();
public:
	uint8_t Enable;
	void Init(uint16_t MaxSize);
	void Insert(int32_t Element);
	void Remove();
	int32_t Average_Get();
	int32_t Last_Get();
};

#endif /* MYQUEUE_MYQUEUE_HPP_ */
