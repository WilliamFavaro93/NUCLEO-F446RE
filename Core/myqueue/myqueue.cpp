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
void MyQueue::_Enqueue(int32_t Element)
{
	_Element[_Last_Index] = Element;
	_Sum += _Element[_Last_Index];

	_Last_Index = (_Last_Index + 1) % _MaxSize;
	_Size = _Size + 1;
}

void MyQueue::_Dequeue()
{
	_Sum -= _Element[_First_Index];
	_Element[_First_Index] = 0;

	_First_Index = (_First_Index + 1) % _MaxSize;
	_Size = _Size - 1;
}

void MyQueue::_State_Update()
{
	_State = 0;
	_State |= (_MaxSize)? 			MYQUEUE_STATE_INIT : 0;
	_State |= (Enable)? 			MYQUEUE_STATE_ENABLE : 0;
	_State |= (_Size == 0)? 		MYQUEUE_STATE_EMPTY : 0;
	_State |= (_Size == _MaxSize)? 	MYQUEUE_STATE_FULL : 0;

	int32_t _Average_temp = (uint32_t)(_Sum/_Size);
	_Average = (!(_State & MYQUEUE_STATE_EMPTY))? (_Average_temp) : 0;
}
/* Public Function -----------------------------------------------------------*/
void MyQueue::Init(uint16_t MaxSize)
{
	_MaxSize = MaxSize;

	while(_State & MYQUEUE_STATE_FULL) _Enqueue(0);
	while(_State & MYQUEUE_STATE_EMPTY) _Dequeue();

	_State_Update();
}

void MyQueue::Insert(int32_t Element)
{
	if(!(_State & MYQUEUE_STATE_INIT)) return;
	if(!(Enable)) return;

	if(_State & MYQUEUE_STATE_FULL)
		_Dequeue();
	_Enqueue(Element);

	_State_Update();
}

void MyQueue::Remove()
{
	if(!(_State & MYQUEUE_STATE_INIT)) return;
	if(!(Enable)) return;

	if(!(_State & MYQUEUE_STATE_EMPTY))
		_Dequeue();

	_State_Update();
}

int32_t MyQueue::Average_Get()
{
	return _Average;
}

int32_t MyQueue::Last_Get()
{
	return _Element[_Last_Index];
}
/* Private Function ----------------------------------------------------------*/
/* End of the file -----------------------------------------------------------*/
