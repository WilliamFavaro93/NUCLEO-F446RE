/**
  ******************************************************************************
  * @file	myinputgpio.hpp
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
#ifndef MYGPIO_MYINPUTGPIO_HPP_
#define MYGPIO_MYINPUTGPIO_HPP_

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#include <stm32f4xx_hal.h>

/* Defines -------------------------------------------------------------------*/
/* Typedefs ------------------------------------------------------------------*/
class MyInputGPIO
{
	GPIO_TypeDef* 	_GPIO;		/*!<  */
	uint16_t 		_Pin;		/*!<  */
public:
	GPIO_PinState 	_PinState;	/*!<  */
	void Init(GPIO_TypeDef* GPIO, uint16_t Pin);
	GPIO_PinState PinState_Get();
};

#endif /* MYGPIO_MYINPUTGPIO_HPP_ */
