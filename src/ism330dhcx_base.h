#ifndef ISM330DHCX_BASE_H_
#define ISM330DHCX_BASE_H_

#include <inttypes.h>
#include "ism330dhcx_utils.h"

typedef ISM330DHCX_Status (*I2C_ReadFun) (void);
typedef ISM330DHCX_Status (*I2C_WriteFun) (void);

typedef struct {
    uint8_t address;
    I2C_ReadFun I2C_Read;
    I2C_WriteFun I2C_Write;

    ACCELEROMETAR_RANGE acc_range;
    GYROSCOPE_RANGE gyro_range;
} ISM330DHCX_Config;

typedef struct {
    uint16_t x;
    uint16_t y;
    uint16_t z;
} ISM330DHCX_ACC_DATA;

typedef struct {
    uint16_t x;
    uint16_t y;
    uint16_t z;
} ISM330DHCX_GYRO_DATA;

typedef uint16_t ISM330DHCX_TEMP_DATA;

typedef struct {
    ISM330DHCX_ACC_DATA acc;
    ISM330DHCX_GYRO_DATA gyro;
    ISM330DHCX_TEMP_DATA temp;
} ISM330DHCX_Data;

#endif