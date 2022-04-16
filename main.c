#include "delay.h"
#include "spi.h"
#include "usb_cdc.h"
#include "stk500.h"
#include "ch554_platform.h"

#define DELAY_MS_HW

/*
 * According to SDCC specification, interrupt handlers MUST be placed within the file which contains
 * the void main(void) function, otherwise SDCC won't be able to recognize it. It's not a bug but a feature.
 * If you know how to fix this, please let me know.
 */
void USBInterruptEntry(void) interrupt INT_NO_USB {
	USBInterrupt();
}


void main(void) {
	CDC_InitBaud();
    CH554_Init();
    DEBUG = 0;
	
    while(1) {
    	CDC_USB_Poll();
        if (CDC_UART_available()) {
            ISP_Process_Data(); //处理数据
        }
    };
}