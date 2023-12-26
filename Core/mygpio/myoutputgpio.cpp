/**
  ******************************************************************************
  * @file	myoutputgpio.cpp
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
#include <myoutputgpio.hpp>

/* Defines -------------------------------------------------------------------*/
/* Variables -----------------------------------------------------------------*/
/* Private Function definition -----------------------------------------------*/
/* Public Function -----------------------------------------------------------*/
void MyOutputGPIO::Init(GPIO_TypeDef* GPIO, uint16_t Pin)
{
	_GPIO = GPIO;
	_Pin = Pin;
}

void MyOutputGPIO::PinState_Set(GPIO_PinState PinState)
{
	_PinState = PinState;
	HAL_GPIO_WritePin(_GPIO, _Pin, _PinState);
}
/* Private Function ----------------------------------------------------------*/

/* End of the file -----------------------------------------------------------*/
