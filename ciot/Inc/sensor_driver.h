/**
  ******************************************************************************
  * @file    x_nucleo_iks01a2.h
  * @author  MEMS Application Team
  * @version V4.0.0
  * @date    1-May-2017
  * @brief   This file contains definitions for the x_nucleo_iks01a2.c
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __X_NUCLEO_IKS01A2_H
#define __X_NUCLEO_IKS01A2_H

#ifdef __cplusplus
extern "C" {
#endif



/* Includes ------------------------------------------------------------------*/

#include "stm32l0xx_hal.h"

#include "accelerometer.h"
#include "gyroscope.h"
#include "magnetometer.h"
#include "humidity.h"
#include "temperature.h"
#include "pressure.h"

/** @addtogroup BSP BSP
 * @{
 */

/** @addtogroup X_NUCLEO_IKS01A2 X_NUCLEO_IKS01A2
 * @{
 */

/** @addtogroup X_NUCLEO_IKS01A2_IO IO
 * @{
 */

/** @addtogroup X_NUCLEO_IKS01A2_IO_Public_Constants Public constants
 * @{
 */

/* Timing samples for L0 with SYSCLK 32MHz set in SystemClock_Config() */
#define NUCLEO_I2C_EXPBD_TIMING_100KHZ       0x10A13E56 /* Analog Filter ON, Rise Time 400ns, Fall Time 100ns */
#define NUCLEO_I2C_EXPBD_TIMING_400KHZ       0x00B1112E /* Analog Filter ON, Rise Time 250ns, Fall Time 100ns */

#define NUCLEO_I2C_EXPBD_TIMEOUT_MAX    0x1000 /*<! The value of the maximal timeout for BUS waiting loops */


/**
  * @}
  */

/** @addtogroup X_NUCLEO_IKS01A2_IO_Public_FunctionPrototypes Public function prototypes
 * @{
 */

DrvStatusTypeDef Sensor_IO_Init( void );

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __X_NUCLEO_IKS01A2_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
