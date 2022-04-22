#include "ch554_platform.h"
#include "usb_desc.h"

// Language Descriptor
code const uint8_t LangDesc[] = {
	4, 0x03,		// Length = 4 bytes, String Descriptor (0x03) 
	0x09, 0x04	// 0x0409 English - United States
};

// String Descriptors:

code const uint8_t ProductName[] = {
	28, 0x03, 	// Length = 28 bytes, String Descriptor (0x03)
	'C', 0, 'H', 0, '5', 0, '5', 0, '4', 0, ' ', 0, 'A', 0, 'V', 0, 'R', 0, '-', 0, 'I', 0, 'S', 0, 'P', 0
};

code const uint8_t ManuName[] = {
	24, 0x03, 	// Length = 18 bytes, String Descriptor (0x03)
	'Z', 0, 'S', 0, 'C', 0, '-', 0, '2', 0, '0', 0, '2', 0, '0', 0, 'L', 0, 'H', 0, 'W', 0
};

code const uint8_t DevName1[] = {
	16, 0x03, 	// Length = 20 bytes, String Descriptor (0x03)
	'z', 0, 's', 0, 'c', 0, '-', 0, 'e', 0, 'd', 0, 'u', 0
};

code const uint8_t* StringDescs[USB_STRINGDESC_COUNT] = {	
	LangDesc,			// 0 (If you want to support string descriptors, you must have this!)
	ProductName,		// 1
	ManuName,			// 2
	DevName1			// 3
};
