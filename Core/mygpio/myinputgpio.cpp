/**
  ******************************************************************************
  * @file	myinputgpio.cpp
  * @author Willam.Favaro
  * @date	20230831
  * @brief	MYGPIO is a struct that refers to a GPIO of the microcontroller.
  *
  ******************************************************************************
  * @note 	The purpose is give a better understanding of the code and
  * 		re-using the same name
  *
  ******************************************************************************
  */


/* Includes ------------------------------------------------------------------*/
#include <myinputgpio.hpp>

/* Defines -------------------------------------------------------------------*/
/* Variables -----------------------------------------------------------------*/
/* Private Function definition -----------------------------------------------*/
/* Public Function -----------------------------------------------------------*/
void MyInputGPIO::Init(GPIO_TypeDef* GPIO, uint16_t Pin)
{
	_GPIO = GPIO;
	_Pin = Pin;
}

GPIO_PinState MyInputGPIO::PinState_Get()
{
	_PinState = HAL_GPIO_ReadPin(_GPIO, _Pin);
	return _PinState;
}
/* Private Function ----------------------------------------------------------*/

/* End of the file -----------------------------------------------------------*/
