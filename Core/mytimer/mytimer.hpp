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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MYTIMER_MYTIMER_HPP_
#define MYTIMER_MYTIMER_HPP_

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#include <stm32f4xx_hal.h>

/* Defines -------------------------------------------------------------------*/
/* Typedefs ------------------------------------------------------------------*/
typedef enum
{
	MYTIMER_TRIGGER_OFF = 0,
	MYTIMER_TRIGGER_ON = 1,
} MyTimer_Trigger_t;

class MyTimer
{
public:
	uint32_t _Time;
	uint32_t _RestartTime;
	MyTimer_Trigger_t Trigger;
	void Init(uint32_t RestartTime);
	void CountDown();
	void Restart();
};

#endif /* MYTIMER_MYTIMER_HPP_ */
