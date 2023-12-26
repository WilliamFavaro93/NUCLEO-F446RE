/**
  ******************************************************************************
  * @file	mytimer.hpp
  * @author Willam.Favaro
  * @date	20231224
  * @brief
  *
  ******************************************************************************
  * @note 	The purpose is give a better understanding of the code and
  * 		re-using the same name
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include <mytimer.hpp>

/* Defines -------------------------------------------------------------------*/
/* Variables -----------------------------------------------------------------*/
/* Private Function definition -----------------------------------------------*/
/* Public Function -----------------------------------------------------------*/
void MyTimer::Init(uint32_t RestartTime)
{
	_RestartTime = RestartTime;
	_Time = RestartTime;
	Trigger = (_Time)? MYTIMER_TRIGGER_OFF : MYTIMER_TRIGGER_ON;
}

void MyTimer::CountDown()
{
	if(_Time)
		_Time--;
	Trigger = (_Time)? MYTIMER_TRIGGER_OFF : MYTIMER_TRIGGER_ON;
}

void MyTimer::Restart()
{
	_Time = _RestartTime;
	Trigger = (_Time)? MYTIMER_TRIGGER_OFF : MYTIMER_TRIGGER_ON;
}
/* Private Function ----------------------------------------------------------*/

/* End of the file -----------------------------------------------------------*/
