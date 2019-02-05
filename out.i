void DIO_voidInitialize(void);
u8 DIO_u8SetPinValue(u8 Copy_u8PinId,u8 Copy_u8PinValue);
void DIO_voidInitialize(void)
{
 ((Register_8Bit*)0x3A)->ByteAccess= 0b010101000;
 ((Register_8Bit*)0x37)->ByteAccess= 0b010101001;
 ((Register_8Bit*)0x34)->ByteAccess= 0b010101001;
    ((Register_8Bit*)0x3A)->ByteAccess= 0b101101001;
}
u8 DIO_u8SetPinValue(u8 Copy_u8PinId,u8 Copy_u8PinValue);
