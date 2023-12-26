/**
  ******************************************************************************
  * @file	myoutputgpio.hpp
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MYGPIO_MYOUTPUTGPIO_HPP_
#define MYGPIO_MYOUTPUTGPIO_HPP_

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#include <stm32f4xx_hal.h>

/* Defines -------------------------------------------------------------------*/
/* Typedefs ------------------------------------------------------------------*/
class MyOutputGPIO
{
	GPIO_TypeDef* 	_GPIO;		/*!<  */
	uint16_t 		_Pin;		/*!<  */
public:
	GPIO_PinState 	_PinState;	/*!<  */
	void Init(GPIO_TypeDef* GPIO, uint16_t Pin);
	void PinState_Set(GPIO_PinState PinState);
};

#endif /* MYGPIO_MYOUTPUTGPIO_HPP_ */
