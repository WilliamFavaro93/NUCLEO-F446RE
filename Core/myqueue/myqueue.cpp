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
#include <myqueue.hpp>

/* Defines -------------------------------------------------------------------*/
/* Variables -----------------------------------------------------------------*/
/* Private Function definition -----------------------------------------------*/
/* Public Function -----------------------------------------------------------*/
void MyQueue::Init(uint8_t MaxSize)
{
	_MaxSize = MaxSize;

	while(State & MYQUEUE_STATE_FULL) _Enqueue(0);
	while(State & MYQUEUE_STATE_EMPTY) _Dequeue();

	_State_Update();
}

void MyQueue::_Enqueue(uint32_t Element)
{
	_Last_Index++;
	_Last_Index %= _MaxSize;
	_Element[_Last_Index] = Element;
	_Sum += Element;
	_Size++;
}

void MyQueue::_Dequeue()
{
	_Sum -= _Element[_First_Index];
	_Element[_First_Index] = 0;
	_First_Index++;
	_First_Index %= _MaxSize;
	_Size--;
}

void MyQueue::_State_Update()
{
	State = 0;
	State |= (_MaxSize)? 			MYQUEUE_STATE_INIT : 0;
	State |= (Enable)? 				MYQUEUE_STATE_ENABLE : 0;
	State |= (!(_Size))? 			MYQUEUE_STATE_EMPTY : 0;
	State |= (_Size == _MaxSize)? 	MYQUEUE_STATE_FULL : 0;

	_Average = (!(State & MYQUEUE_STATE_EMPTY))? _Sum/_Size : 0;
}

void MyQueue::Insert(int32_t Element)
{
	if(!((State & MYQUEUE_STATE_INIT) || (State & MYQUEUE_STATE_ENABLE))) return;

	if(State & MYQUEUE_STATE_FULL)
		_Dequeue();
	_Enqueue(Element);

	_State_Update();
}

void MyQueue::Remove()
{
	if(!((State & MYQUEUE_STATE_INIT) || (State & MYQUEUE_STATE_ENABLE))) return;

	if(!(State & MYQUEUE_STATE_EMPTY))
		_Dequeue();

	_State_Update();
}

uint32_t MyQueue::Average_Get()
{
	return _Average;
}

uint32_t MyQueue::Last_Get()
{
	return _Element[_Last_Index];
}
/* Private Function ----------------------------------------------------------*/
/* End of the file -----------------------------------------------------------*/
