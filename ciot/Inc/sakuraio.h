/*
 * sakuraio.h
 *
 *  Created on: 2017/08/21
 *      Author: SpiralRay
 */

#ifndef SAKURAIO_H_
#define SAKURAIO_H_

#include "stm32l0xx_hal.h"
#include "sakuraio_commands.h"

#define SAKURAIO_SLAVE_ADDR (0x4F<<1)

#define CHANNEL_TRANSMIT_FREE 0x00
#define CHANNEL_TRANSMIT_BUSY 0x01   //1bit目はBUSYフラグ
#define CHANNEL_TRANSMIT_FAILED 0x02 //2bit目は送信失敗フラグ

void SakuraIO_Init(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef SakuraIO_ExecuteCommand(uint8_t cmd,uint8_t requestLength, uint8_t *request, uint8_t *responseLength, uint8_t *response);

uint8_t SakuraIO_GetConnectionStatus();
uint8_t SakuraIO_GetSignalQuality();
uint64_t SakuraIO_GetUnixtime();
uint8_t SakuraIO_Echoback(uint8_t length, uint8_t *data, uint8_t *response);

/* TX Commands */
uint8_t SakuraIO_EnqueueTxRaw(uint8_t ch, uint8_t type, uint8_t length, uint8_t *data, uint64_t offset);
uint8_t SakuraIO_EnqueueInt32(uint8_t ch, int32_t value, uint64_t offset);
uint8_t SakuraIO_EnqueueUint32(uint8_t ch, uint32_t value, uint64_t offset);
uint8_t SakuraIO_EnqueueFloat(uint8_t ch, float value, uint64_t offset);
uint8_t SakuraIO_EnqueueDouble(uint8_t ch, double value, uint64_t offset);
uint8_t SakuraIO_EnqueueByte(uint8_t ch, uint8_t value[8], uint64_t offset);
uint8_t SakuraIO_GetTxQueueLength(uint8_t *available, uint8_t *queued);
uint8_t SakuraIO_ClearTx();
uint8_t SakuraIO_Send();
uint8_t SakuraIO_GetTxStatus(uint8_t *queue, uint8_t *immediate);
uint8_t SakuraIO_DequeueRx(uint8_t *ch, uint8_t *type, uint8_t *value, int64_t *offset);
uint8_t SakuraIO_PeekRx(uint8_t *ch, uint8_t *type, uint8_t *value, int64_t *offset);
uint8_t SakuraIO_GetRxQueueLength(uint8_t *available, uint8_t *queued);
uint8_t SakuraIO_ClearRx();

/* Operation command */
uint16_t SakuraIO_GetProductID();
uint8_t SakuraIO_GetUniqueID(char *data);
uint8_t SakuraIO_GetFirmwareVersion(char *data);
uint8_t SakuraIO_Unlock();
uint8_t SakuraIO_UpdateFirmware();
uint8_t SakuraIO_GetFirmwareUpdateStatus();
uint8_t SakuraIO_Reset();
uint8_t SakuraIO_Command_set_power_save_mode(uint8_t mode);
uint8_t SakuraIO_Command_get_power_save_mode();

#endif /* SAKURAIO_H_ */
