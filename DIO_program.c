/********************************************************************************/
/* Author : Mohamed El-Hosary                                                   */
/*Date : 4 Feb 2018                                                             */
/*Version : V01                                                                 */
/********************************************************************************/
/*Description                                                                   */
/*------------                                                                  */
/*This file has the implementation of both public and private function          */ 
/*corresponding to DIO component                                                */
/********************************************************************************/
#include "DIO_config.h"
#include "DIO_private.h"
#include "DIO_interface.h"
#include "..\..\04-LIB\02-BIT_CALC\BIT_CLC.h"



/*Description: this function shall initalize the direction and the               */
/*initial value for DIO pins                                                     */
void DIO_voidInitialize(void)
{
	DIO_u8_DDRA->ByteAccess= CONC_8BIT(DIO_u8_PIN0_DIR,
	                                   DIO_u8_PIN1_DIR,
						               DIO_u8_PIN2_DIR,
						               DIO_u8_PIN3_DIR,
						               DIO_u8_PIN4_DIR,
						               DIO_u8_PIN5_DIR,
						               DIO_u8_PIN6_DIR,
						               DIO_u8_PIN7_DIR);
									   
	DIO_u8_DDRB->ByteAccess= CONC_8BIT(DIO_u8_PIN8_DIR,
	                                   DIO_u8_PIN9_DIR,
						               DIO_u8_PIN10_DIR,
						               DIO_u8_PIN11_DIR,
						               DIO_u8_PIN12_DIR,
						               DIO_u8_PIN13_DIR,
						               DIO_u8_PIN14_DIR,
						               DIO_u8_PIN15_DIR);
									   
	DIO_u8_DDRC->ByteAccess= CONC_8BIT(DIO_u8_PIN16_DIR,
	                                   DIO_u8_PIN17_DIR,
						               DIO_u8_PIN18_DIR,
						               DIO_u8_PIN19_DIR,
						               DIO_u8_PIN20_DIR,
						               DIO_u8_PIN21_DIR,
						               DIO_u8_PIN22_DIR,
						               DIO_u8_PIN23_DIR);
									   
    DIO_u8_DDRA->ByteAccess= CONC_8BIT(DIO_u8_PIN24_DIR,
	                                   DIO_u8_PIN25_DIR,
						               DIO_u8_PIN26_DIR,
						               DIO_u8_PIN27_DIR,
						               DIO_u8_PIN28_DIR,
						               DIO_u8_PIN29_DIR,
						               DIO_u8_PIN30_DIR,
						               DIO_u8_PIN31_DIR);									   
}

/*Decription: the function shall set a certain value to a certain DIO Channel     */
u8 DIO_u8SetPinValue(u8 Copy_u8PinId,u8 Copy_u8PinValue); 
