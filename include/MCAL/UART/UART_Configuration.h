/*
 * UART_Configuration.h
 *
 *  Created on: Feb 1, 2022
 *      Author: abdelrahmanhossam
 */

#ifndef INCLUDE_MCAL_UART_UART_CONFIGURATION_H_
#define INCLUDE_MCAL_UART_UART_CONFIGURATION_H_

/* DOUBLE_SPEED_OFF - DOUBLE_SPEED_ON */
#define USART_DOUBLE_SPEED    DOUBLE_SPEED_OFF

#define F_CPU   8000000UL

#define BaudRate 9600

#define USART_TX_INTERRUPT_ENABLE			  INTERRUPT_DISABLE
#define USART_RX_INTERRUPT_ENABLE			  INTERRUPT_DISABLE
#define USART_DATA_REGISTER_INTERRUPT_ENABLE  INTERRUPT_DISABLE

/* CHAR_FIVE_BIT - CHAR_SIX_BIT - CHAR_SEVEN_BIT - CHAR_EIGHT_BIT - CHAR_NINE_BIT */
#define CHARACTER_SIZE CHAR_EIGHT_BIT

/*ASYNCHRONOUS_OPERATION - SYNCHRONOUS_OPERATION*/
#define MODE_OF_OPERATION ASYNCHRONOUS_OPERATION

//PARITY_DISABLE
//PARITY_EVEN
//PARITY_ODD
#define PARITY_MODE   PARITY_DISABLE


// ONE_STOP_BIT
// TWO_STOP_BIT
#define STOP_BITS_MODE ONE_STOP_BIT

//RISING_THEN_FALING
//FALING_THEN_RISING
#define CLOCK_POLARITY  RISING_THEN_FALING

/* Time out for non blocking Functions */
#define TIME_OUT 500000

#define VALUE_RETURN_NO_RECIEVED_DATA  255
#endif /* INCLUDE_MCAL_UART_UART_CONFIGURATION_H_ */
