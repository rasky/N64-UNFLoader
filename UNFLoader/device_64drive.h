#ifndef __DEVICE_64DRIVE_HEADER
#define __DEVICE_64DRIVE_HEADER

    #include "device.h"
    #include <stdbool.h>


    /*********************************
                  Macros
    *********************************/

    #define    DEV_CMD_LOADRAM       0x20
    #define    DEV_CMD_DUMPRAM       0x30
    #define    DEV_CMD_USBRECV       0x40
    #define    DEV_CMD_SETSAVE       0x70
    #define    DEV_CMD_SETCIC        0x72
    #define    DEV_CMD_GETVER        0x80
    #define    DEV_CMD_UPGRADE       0x84
    #define    DEV_CMD_UPGREPORT     0x85
    #define    DEV_CMD_STD_ENTER     0x88
    #define    DEV_CMD_STD_LEAVE     0x89
    #define    DEV_CMD_PI_RD_32      0x90
    #define    DEV_CMD_PI_WR_32      0x91
    #define    DEV_CMD_PI_RD_BURST   0x92
    #define    DEV_CMD_PI_WR_BURST   0x93
    #define    DEV_CMD_PI_WR_BL      0x94
    #define    DEV_CMD_PI_WR_BL_LONG 0x95
    #define    DEV_CMD_SI_OP         0x98

    #define DEV_MAGIC 0x55444556 // UDEV


    /*********************************
            Function Prototypes
    *********************************/

    bool        device_test_64drive1(FTDIDevice* cart, uint32_t index);
    bool        device_test_64drive2(FTDIDevice* cart, uint32_t index);
    DeviceError device_open_64drive(FTDIDevice* cart);
    /*
    void        device_sendrom_64drive(FTDIDevice* cart, FILE *file, uint32_t size);
    bool        device_testdebug_64drive(FTDIDevice* cart);
    void        device_senddata_64drive(FTDIDevice* cart, int datatype, char* data, uint32_t size);
    */
    DeviceError device_close_64drive(FTDIDevice* cart);

#endif