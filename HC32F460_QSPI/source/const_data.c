const unsigned char data[] = {"/**\
 *******************************************************************************\
 * @file  HC32F460.h\
 * @brief Headerfile for HC32F460 series MCU\
 @verbatim\
   Change Logs:\
   Date             Author          Notes\
   2021-05-24       CDT          First version\
 @endverbatim\
 *******************************************************************************\
 * Copyright (C) 2020, Huada Semiconductor Co., Ltd. All rights reserved.\
 *\
 * This software component is licensed by HDSC under BSD 3-Clause license\
 * License. You may obtain a copy of the License at:\
 *                    opensource.org/licenses/BSD-3-Clause\
 *\
 *******************************************************************************\
 **/\
\
#ifndef __HC32F460_H__\
#define __HC32F460_H__\
\
#ifdef __cplusplus\
#endif\
\
/*******************************************************************************\
 * Configuration of the Cortex-M4 Processor and Core Peripherals\
 ******************************************************************************/\
#define __CM4_REV                 1       /*!< Core revision r0p1                                   */\
#define __MPU_PRESENT             1       /*!< HC32F460 provides an MPU                             */\
#define __NVIC_PRIO_BITS          4       /*!< HC32F460 uses 4 Bits for the Priority Levels         */\
#define __Vendor_SysTickConfig    0       /*!< Set to 1 if different SysTick Config is used         */\
#define __FPU_PRESENT             1       /*!< FPU present                                          */\
\
/*******************************************************************************\
 * Interrupt Number Definition\
 ******************************************************************************/\
typedef enum IRQn\
{\
    NMI_IRQn                    = -14, /*  2 Non Maskable                            */\
    HardFault_IRQn              = -13, /*  3 Hard Fault                              */\
    MemManageFault_IRQn         = -12, /*  4 MemManage Fault                         */\
    BusFault_IRQn               = -11, /*  5 Bus Fault                               */\
    UsageFault_IRQn             = -10, /*  6 Usage Fault                             */\
    SVC_IRQn                    = -5,  /* 11 SV Call                                 */\
    DebugMonitor_IRQn           = -4,  /* 12 Debug Monitor                           */\
    PendSV_IRQn                 = -2,  /* 14 Pend SV                                 */\
    SysTick_IRQn                = -1,  /* 15 System Tick                             */\
    Int000_IRQn                 = 0,\
    Int001_IRQn                 = 1,\
    Int002_IRQn                 = 2,\
    Int003_IRQn                 = 3,\
    Int004_IRQn                 = 4,\
    Int005_IRQn                 = 5,\
    Int006_IRQn                 = 6,\
    Int007_IRQn                 = 7,\
    Int008_IRQn                 = 8,\
    Int009_IRQn                 = 9,\
    Int010_IRQn                 = 10,\
    Int011_IRQn                 = 11,\
    Int012_IRQn                 = 12,\
    Int014_IRQn                 = 14,\
    Int015_IRQn                 = 15,\
    Int016_IRQn                 = 16,\
    Int017_IRQn                 = 17,\
    Int018_IRQn                 = 18,\
    Int019_IRQn                 = 19,\
    Int020_IRQn                 = 20,\
    Int021_IRQn                 = 21,\
    Int022_IRQn                 = 22,\
    Int023_IRQn                 = 23,\
    Int024_IRQn                 = 24,\
    Int025_IRQn                 = 25,\
    Int026_IRQn                 = 26,\
    Int027_IRQn                 = 27,\
    Int028_IRQn                 = 28,\
    Int029_IRQn                 = 29,\
    Int030_IRQn                 = 30,\
    Int031_IRQn                 = 31,\
    Int032_IRQn                 = 32,\
    Int033_IRQn                 = 33,\
    Int034_IRQn                 = 34,\
    Int035_IRQn                 = 35,\
    Int036_IRQn                 = 36,\
    Int037_IRQn                 = 37,\
    Int038_IRQn                 = 38,\
    Int039_IRQn                 = 39,\
    Int040_IRQn                 = 40,\
    Int041_IRQn                 = 41,\
    Int043_IRQn                 = 43,\
    Int044_IRQn                 = 44,\
    Int045_IRQn                 = 45,\
    Int046_IRQn                 = 46,\
    Int047_IRQn                 = 47,\
    Int048_IRQn                 = 48,\
    Int049_IRQn                 = 49,\
    Int050_IRQn                 = 50,\
    Int051_IRQn                 = 51,\
    Int052_IRQn                 = 52,\
    Int053_IRQn                 = 53,\
    Int054_IRQn                 = 54,\
    Int055_IRQn                 = 55,\
#define bM4_PORT_PFSRC10_FSEL3                    (*((volatile unsigned int*)(0x42A7954CUL)))/**\
 *******************************************************************************\
 * @file  HC32F460.h\
 * @brief Headerfile for HC32F460 series MCU\
 @verbatim\
   Change Logs:\
   Date             Author          Notes\
   2021-05-24       CDT          First version\
 @endverbatim\
 *******************************************************************************\
 * Copyright (C) 2020, Huada Semiconductor Co., Ltd. All rights reserved.\
 *\
 * This software component is licensed by HDSC under BSD 3-Clause license\
 * License. You may obtain a copy of the License at:\
 *                    opensource.org/licenses/BSD-3-Clause\
 *\
 *******************************************************************************\
 **/\
\
#ifndef __HC32F460_H__\
#define __HC32F460_H__\
\
#ifdef __cplusplus\
#endif\
\
/*******************************************************************************\
 * Configuration of the Cortex-M4 Processor and Core Peripherals\
 ******************************************************************************/\
#define __CM4_REV                 1       /*!< Core revision r0p1                                   */\
#define __MPU_PRESENT             1       /*!< HC32F460 provides an MPU                             */\
#define __NVIC_PRIO_BITS          4       /*!< HC32F460 uses 4 Bits for the Priority Levels         */\
#define __Vendor_SysTickConfig    0       /*!< Set to 1 if different SysTick Config is used         */\
#define __FPU_PRESENT             1       /*!< FPU present                                          */\
\
/*******************************************************************************\
 * Interrupt Number Definition\
 ******************************************************************************/\
typedef enum IRQn\
{\
    NMI_IRQn                    = -14, /*  2 Non Maskable                            */\
    HardFault_IRQn              = -13, /*  3 Hard Fault                              */\
    MemManageFault_IRQn         = -12, /*  4 MemManage Fault                         */\
    BusFault_IRQn               = -11, /*  5 Bus Fault                               */\
    UsageFault_IRQn             = -10, /*  6 Usage Fault                             */\
    SVC_IRQn                    = -5,  /* 11 SV Call                                 */\
    DebugMonitor_IRQn           = -4,  /* 12 Debug Monitor                           */\
    PendSV_IRQn                 = -2,  /* 14 Pend SV                                 */\
    SysTick_IRQn                = -1,  /* 15 System Tick                             */\
    Int000_IRQn                 = 0,\
    Int001_IRQn                 = 1,\
    Int002_IRQn                 = 2,\
    Int003_IRQn                 = 3,\
    Int004_IRQn                 = 4,\
    Int005_IRQn                 = 5,\
    Int006_IRQn                 = 6,\
    Int007_IRQn                 = 7,\
    Int008_IRQn                 = 8,\
    Int009_IRQn                 = 9,\
    Int010_IRQn                 = 10,\
    Int011_IRQn                 = 11,\
    Int012_IRQn                 = 12,\
    Int014_IRQn                 = 14,\
    Int015_IRQn                 = 15,\
    Int016_IRQn                 = 16,\
    Int017_IRQn                 = 17,\
    Int018_IRQn                 = 18,\
    Int019_IRQn                 = 19,\
    Int020_IRQn                 = 20,\
    Int021_IRQn                 = 21,\
    Int022_IRQn                 = 22,\
    Int023_IRQn                 = 23,\
    Int024_IRQn                 = 24,\
    Int025_IRQn                 = 25,\
    Int026_IRQn                 = 26,\
    Int027_IRQn                 = 27,\
    Int028_IRQn                 = 28,\
    Int029_IRQn                 = 29,\
    Int030_IRQn                 = 30,\
    Int031_IRQn                 = 31,\
    Int032_IRQn                 = 32,\
    Int033_IRQn                 = 33,\
    Int034_IRQn                 = 34,\
    Int035_IRQn                 = 35,\
    Int036_IRQn                 = 36,\
    Int037_IRQn                 = 37,\
    Int038_IRQn                 = 38,\
    Int039_IRQn                 = 39,\
    Int040_IRQn                 = 40,\
    Int041_IRQn                 = 41,\
    Int043_IRQn                 = 43,\
    Int044_IRQn                 = 44,\
    Int045_IRQn                 = 45,\
    Int046_IRQn                 = 46,\
    Int047_IRQn                 = 47,\
    Int048_IRQn                 = 48,\
    Int049_IRQn                 = 49,\
    Int050_IRQn                 = 50,\
    Int051_IRQn                 = 51,\
    Int052_IRQn                 = 52,\
    Int053_IRQn                 = 53,\
    Int054_IRQn                 = 54,\
    Int055_IRQn                 = 55,\
#define bM4_PORT_PFSRC10_FSEL3                    (*((volatile unsigned int*)(0x42A7954CUL)))/**\
 *******************************************************************************\
 * @file  HC32F460.h\
 * @brief Headerfile for HC32F460 series MCU\
 @verbatim\
   Change Logs:\
   Date             Author          Notes\
   2021-05-24       CDT          First version\
 @endverbatim\
 *******************************************************************************\
 * Copyright (C) 2020, Huada Semiconductor Co., Ltd. All rights reserved.\
 *\
 * This software component is licensed by HDSC under BSD 3-Clause license\
 * License. You may obtain a copy of the License at:\
 *                    opensource.org/licenses/BSD-3-Clause\
 *\
 *******************************************************************************\
 **/\
\
#ifndef __HC32F460_H__\
#define __HC32F460_H__\
\
#ifdef __cplusplus\
#endif\
\
/*******************************************************************************\
 * Configuration of the Cortex-M4 Processor and Core Peripherals\
 ******************************************************************************/\
#define __CM4_REV                 1       /*!< Core revision r0p1                                   */\
#define __MPU_PRESENT             1       /*!< HC32F460 provides an MPU                             */\
#define __NVIC_PRIO_BITS          4       /*!< HC32F460 uses 4 Bits for the Priority Levels         */\
#define __Vendor_SysTickConfig    0       /*!< Set to 1 if different SysTick Config is used         */\
#define __FPU_PRESENT             1       /*!< FPU present                                          */\
\
/*******************************************************************************\
 * Interrupt Number Definition\
 ******************************************************************************/\
typedef enum IRQn\
{\
    NMI_IRQn                    = -14, /*  2 Non Maskable                            */\
    HardFault_IRQn              = -13, /*  3 Hard Fault                              */\
    MemManageFault_IRQn         = -12, /*  4 MemManage Fault                         */\
    BusFault_IRQn               = -11, /*  5 Bus Fault                               */\
    UsageFault_IRQn             = -10, /*  6 Usage Fault                             */\
    SVC_IRQn                    = -5,  /* 11 SV Call                                 */\
    DebugMonitor_IRQn           = -4,  /* 12 Debug Monitor                           */\
    PendSV_IRQn                 = -2,  /* 14 Pend SV                                 */\
    SysTick_IRQn                = -1,  /* 15 System Tick                             */\
    Int000_IRQn                 = 0,\
    Int001_IRQn                 = 1,\
    Int002_IRQn                 = 2,\
    Int003_IRQn                 = 3,\
    Int004_IRQn                 = 4,\
    Int005_IRQn                 = 5,\
    Int006_IRQn                 = 6,\
    Int007_IRQn                 = 7,\
    Int008_IRQn                 = 8,\
    Int009_IRQn                 = 9,\
    Int010_IRQn                 = 10,\
    Int011_IRQn                 = 11,\
    Int012_IRQn                 = 12,\
    Int014_IRQn                 = 14,\
    Int015_IRQn                 = 15,\
    Int016_IRQn                 = 16,\
    Int017_IRQn                 = 17,\
    Int018_IRQn                 = 18,\
    Int019_IRQn                 = 19,\
    Int020_IRQn                 = 20,\
    Int021_IRQn                 = 21,\
    Int022_IRQn                 = 22,\
    Int023_IRQn                 = 23,\
    Int024_IRQn                 = 24,\
    Int025_IRQn                 = 25,\
    Int026_IRQn                 = 26,\
    Int027_IRQn                 = 27,\
    Int028_IRQn                 = 28,\
    Int029_IRQn                 = 29,\
    Int030_IRQn                 = 30,\
    Int031_IRQn                 = 31,\
    Int032_IRQn                 = 32,\
    Int033_IRQn                 = 33,\
    Int034_IRQn                 = 34,\
    Int035_IRQn                 = 35,\
    Int036_IRQn                 = 36,\
    Int037_IRQn                 = 37,\
    Int038_IRQn                 = 38,\
    Int039_IRQn                 = 39,\
    Int040_IRQn                 = 40,\
    Int041_IRQn                 = 41,\
    Int043_IRQn                 = 43,\
    Int044_IRQn                 = 44,\
    Int045_IRQn                 = 45,\
    Int046_IRQn                 = 46,\
    Int047_IRQn                 = 47,\
    Int048_IRQn                 = 48,\
    Int049_IRQn                 = 49,\
    Int050_IRQn                 = 50,\
    Int051_IRQn                 = 51,\
    Int052_IRQn                 = 52,\
    Int053_IRQn                 = 53,\
    Int054_IRQn                 = 54,\
    Int055_IRQn                 = 55,\
#define bM4_PORT_PFSRC10_FSEL3                    (*((volatile unsigned int*)(0x42A7954CUL)))/**\
 *******************************************************************************\
 * @file  HC32F460.h\
 * @brief Headerfile for HC32F460 series MCU\
 @verbatim\
   Change Logs:\
   Date             Author          Notes\
   2021-05-24       CDT          First version\
 @endverbatim\
 *******************************************************************************\
 * Copyright (C) 2020, Huada Semiconductor Co., Ltd. All rights reserved.\
 *\
 * This software component is licensed by HDSC under BSD 3-Clause license\
 * License. You may obtain a copy of the License at:\
 *                    opensource.org/licenses/BSD-3-Clause\
 *\
 *******************************************************************************\
 **/\
\
#ifndef __HC32F460_H__\
#define __HC32F460_H__\
\
#ifdef __cplusplus\
#endif\
\
/*******************************************************************************\
 * Configuration of the Cortex-M4 Processor and Core Peripherals\
 ******************************************************************************/\
#define __CM4_REV                 1       /*!< Core revision r0p1                                   */\
#define __MPU_PRESENT             1       /*!< HC32F460 provides an MPU                             */\
#define __NVIC_PRIO_BITS          4       /*!< HC32F460 uses 4 Bits for the Priority Levels         */\
#define __Vendor_SysTickConfig    0       /*!< Set to 1 if different SysTick Config is used         */\
#define __FPU_PRESENT             1       /*!< FPU present                                          */\
\
/*******************************************************************************\
 * Interrupt Number Definition\
 ******************************************************************************/\
typedef enum IRQn\
{\
    NMI_IRQn                    = -14, /*  2 Non Maskable                            */\
    HardFault_IRQn              = -13, /*  3 Hard Fault                              */\
    MemManageFault_IRQn         = -12, /*  4 MemManage Fault                         */\
    BusFault_IRQn               = -11, /*  5 Bus Fault                               */\
    UsageFault_IRQn             = -10, /*  6 Usage Fault                             */\
    SVC_IRQn                    = -5,  /* 11 SV Call                                 */\
    DebugMonitor_IRQn           = -4,  /* 12 Debug Monitor                           */\
    PendSV_IRQn                 = -2,  /* 14 Pend SV                                 */\
    SysTick_IRQn                = -1,  /* 15 System Tick                             */\
    Int000_IRQn                 = 0,\
    Int001_IRQn                 = 1,\
    Int002_IRQn                 = 2,\
    Int003_IRQn                 = 3,\
    Int004_IRQn                 = 4,\
    Int005_IRQn                 = 5,\
    Int006_IRQn                 = 6,\
    Int007_IRQn                 = 7,\
    Int008_IRQn                 = 8,\
    Int009_IRQn                 = 9,\
    Int010_IRQn                 = 10,\
    Int011_IRQn                 = 11,\
    Int012_IRQn                 = 12,\
    Int014_IRQn                 = 14,\
    Int015_IRQn                 = 15,\
    Int016_IRQn                 = 16,\
    Int017_IRQn                 = 17,\
    Int018_IRQn                 = 18,\
    Int019_IRQn                 = 19,\
    Int020_IRQn                 = 20,\
    Int021_IRQn                 = 21,\
    Int022_IRQn                 = 22,\
    Int023_IRQn                 = 23,\
    Int024_IRQn                 = 24,\
    Int025_IRQn                 = 25,\
    Int026_IRQn                 = 26,\
    Int027_IRQn                 = 27,\
    Int028_IRQn                 = 28,\
    Int029_IRQn                 = 29,\
    Int030_IRQn                 = 30,\
    Int031_IRQn                 = 31,\
    Int032_IRQn                 = 32,\
    Int033_IRQn                 = 33,\
    Int034_IRQn                 = 34,\
    Int035_IRQn                 = 35,\
    Int036_IRQn                 = 36,\
    Int037_IRQn                 = 37,\
    Int038_IRQn                 = 38,\
    Int039_IRQn                 = 39,\
    Int040_IRQn                 = 40,\
    Int041_IRQn                 = 41,\
    Int043_IRQn                 = 43,\
    Int044_IRQn                 = 44,\
    Int045_IRQn                 = 45,\
    Int046_IRQn                 = 46,\
    Int047_IRQn                 = 47,\
    Int048_IRQn                 = 48,\
    Int049_IRQn                 = 49,\
    Int050_IRQn                 = 50,\
    Int051_IRQn                 = 51,\
    Int052_IRQn                 = 52,\
    Int053_IRQn                 = 53,\
    Int054_IRQn                 = 54,\
    Int055_IRQn                 = 55,\
#define bM4_PORT_PFSRC10_FSEL3                    (*((volatile unsigned int*)(0x42A7954CUL)))/**\
 *******************************************************************************\
 * @file  HC32F460.h\
 * @brief Headerfile for HC32F460 series MCU\
 @verbatim\
   Change Logs:\
   Date             Author          Notes\
   2021-05-24       CDT          First version\
 @endverbatim\
 *******************************************************************************\
 * Copyright (C) 2020, Huada Semiconductor Co., Ltd. All rights reserved.\
 *\
 * This software component is licensed by HDSC under BSD 3-Clause license\
 * License. You may obtain a copy of the License at:\
 *                    opensource.org/licenses/BSD-3-Clause\
 *\
 *******************************************************************************\
 **/\
\
#ifndef __HC32F460_H__\
#define __HC32F460_H__\
\
#ifdef __cplusplus\
#endif\
\
/*******************************************************************************\
 * Configuration of the Cortex-M4 Processor and Core Peripherals\
 ******************************************************************************/\
#define __CM4_REV                 1       /*!< Core revision r0p1                                   */\
#define __MPU_PRESENT             1       /*!< HC32F460 provides an MPU                             */\
#define __NVIC_PRIO_BITS          4       /*!< HC32F460 uses 4 Bits for the Priority Levels         */\
#define __Vendor_SysTickConfig    0       /*!< Set to 1 if different SysTick Config is used         */\
#define __FPU_PRESENT             1       /*!< FPU present                                          */\
\
/*******************************************************************************\
 * Interrupt Number Definition\
 ******************************************************************************/\
typedef enum IRQn\
{\
    NMI_IRQn                    = -14, /*  2 Non Maskable                            */\
    HardFault_IRQn              = -13, /*  3 Hard Fault                              */\
    MemManageFault_IRQn         = -12, /*  4 MemManage Fault                         */\
    BusFault_IRQn               = -11, /*  5 Bus Fault                               */\
    UsageFault_IRQn             = -10, /*  6 Usage Fault                             */\
    SVC_IRQn                    = -5,  /* 11 SV Call                                 */\
    DebugMonitor_IRQn           = -4,  /* 12 Debug Monitor                           */\
    PendSV_IRQn                 = -2,  /* 14 Pend SV                                 */\
    SysTick_IRQn                = -1,  /* 15 System Tick                             */\
    Int000_IRQn                 = 0,\
    Int001_IRQn                 = 1,\
    Int002_IRQn                 = 2,\
    Int003_IRQn                 = 3,\
    Int004_IRQn                 = 4,\
    Int005_IRQn                 = 5,\
    Int006_IRQn                 = 6,\
    Int007_IRQn                 = 7,\
    Int008_IRQn                 = 8,\
    Int009_IRQn                 = 9,\
    Int010_IRQn                 = 10,\
    Int011_IRQn                 = 11,\
    Int012_IRQn                 = 12,\
    Int014_IRQn                 = 14,\
    Int015_IRQn                 = 15,\
    Int016_IRQn                 = 16,\
    Int017_IRQn                 = 17,\
    Int018_IRQn                 = 18,\
    Int019_IRQn                 = 19,\
    Int020_IRQn                 = 20,\
    Int021_IRQn                 = 21,\
    Int022_IRQn                 = 22,\
    Int023_IRQn                 = 23,\
    Int024_IRQn                 = 24,\
    Int025_IRQn                 = 25,\
    Int026_IRQn                 = 26,\
    Int027_IRQn                 = 27,\
    Int028_IRQn                 = 28,\
    Int029_IRQn                 = 29,\
    Int030_IRQn                 = 30,\
    Int031_IRQn                 = 31,\
    Int032_IRQn                 = 32,\
    Int033_IRQn                 = 33,\
    Int034_IRQn                 = 34,\
    Int035_IRQn                 = 35,\
    Int036_IRQn                 = 36,\
    Int037_IRQn                 = 37,\
    Int038_IRQn                 = 38,\
    Int039_IRQn                 = 39,\
    Int040_IRQn                 = 40,\
    Int041_IRQn                 = 41,\
    Int043_IRQn                 = 43,\
    Int044_IRQn                 = 44,\
    Int045_IRQn                 = 45,\
    Int046_IRQn                 = 46,\
    Int047_IRQn                 = 47,\
    Int048_IRQn                 = 48,\
    Int049_IRQn                 = 49,\
    Int050_IRQn                 = 50,\
    Int051_IRQn                 = 51,\
    Int052_IRQn                 = 52,\
    Int053_IRQn                 = 53,\
    Int054_IRQn                 = 54,\
    Int055_IRQn                 = 55,\
#define bM4_PORT_PFSRC10_FSEL3                    (*((volatile unsigned int*)(0x42A7954CUL)))/**\
 *******************************************************************************\
 * @file  HC32F460.h\
 * @brief Headerfile for HC32F460 series MCU\
 @verbatim\
   Change Logs:\
   Date             Author          Notes\
   2021-05-24       CDT          First version\
 @endverbatim\
 *******************************************************************************\
 * Copyright (C) 2020, Huada Semiconductor Co., Ltd. All rights reserved.\
 *\
 * This software component is licensed by HDSC under BSD 3-Clause license\
 * License. You may obtain a copy of the License at:\
 *                    opensource.org/licenses/BSD-3-Clause\
 *\
 *******************************************************************************\
 **/\
\
#ifndef __HC32F460_H__\
#define __HC32F460_H__\
\
#ifdef __cplusplus\
#endif\
\
/*******************************************************************************\
 * Configuration of the Cortex-M4 Processor and Core Peripherals\
 ******************************************************************************/\
#define __CM4_REV                 1       /*!< Core revision r0p1                                   */\
#define __MPU_PRESENT             1       /*!< HC32F460 provides an MPU                             */\
#define __NVIC_PRIO_BITS          4       /*!< HC32F460 uses 4 Bits for the Priority Levels         */\
#define __Vendor_SysTickConfig    0       /*!< Set to 1 if different SysTick Config is used         */\
#define __FPU_PRESENT             1       /*!< FPU present                                          */\
\
/*******************************************************************************\
 * Interrupt Number Definition\
 ******************************************************************************/\
typedef enum IRQn\
{\
    NMI_IRQn                    = -14, /*  2 Non Maskable                            */\
    HardFault_IRQn              = -13, /*  3 Hard Fault                              */\
    MemManageFault_IRQn         = -12, /*  4 MemManage Fault                         */\
    BusFault_IRQn               = -11, /*  5 Bus Fault                               */\
    UsageFault_IRQn             = -10, /*  6 Usage Fault                             */\
    SVC_IRQn                    = -5,  /* 11 SV Call                                 */\
    DebugMonitor_IRQn           = -4,  /* 12 Debug Monitor                           */\
    PendSV_IRQn                 = -2,  /* 14 Pend SV                                 */\
    SysTick_IRQn                = -1,  /* 15 System Tick                             */\
    Int000_IRQn                 = 0,\
    Int001_IRQn                 = 1,\
    Int002_IRQn                 = 2,\
    Int003_IRQn                 = 3,\
    Int004_IRQn                 = 4,\
    Int005_IRQn                 = 5,\
    Int006_IRQn                 = 6,\
    Int007_IRQn                 = 7,\
    Int008_IRQn                 = 8,\
    Int009_IRQn                 = 9,\
    Int010_IRQn                 = 10,\
    Int011_IRQn                 = 11,\
    Int012_IRQn                 = 12,\
    Int014_IRQn                 = 14,\
    Int015_IRQn                 = 15,\
    Int016_IRQn                 = 16,\
    Int017_IRQn                 = 17,\
    Int018_IRQn                 = 18,\
    Int019_IRQn                 = 19,\
    Int020_IRQn                 = 20,\
    Int021_IRQn                 = 21,\
    Int022_IRQn                 = 22,\
    Int023_IRQn                 = 23,\
    Int024_IRQn                 = 24,\
    Int025_IRQn                 = 25,\
    Int026_IRQn                 = 26,\
    Int027_IRQn                 = 27,\
    Int028_IRQn                 = 28,\
    Int029_IRQn                 = 29,\
    Int030_IRQn                 = 30,\
    Int031_IRQn                 = 31,\
    Int032_IRQn                 = 32,\
    Int033_IRQn                 = 33,\
    Int034_IRQn                 = 34,\
    Int035_IRQn                 = 35,\
    Int036_IRQn                 = 36,\
    Int037_IRQn                 = 37,\
    Int038_IRQn                 = 38,\
    Int039_IRQn                 = 39,\
    Int040_IRQn                 = 40,\
    Int041_IRQn                 = 41,\
    Int043_IRQn                 = 43,\
    Int044_IRQn                 = 44,\
    Int045_IRQn                 = 45,\
    Int046_IRQn                 = 46,\
    Int047_IRQn                 = 47,\
    Int048_IRQn                 = 48,\
    Int049_IRQn                 = 49,\
    Int050_IRQn                 = 50,\
    Int051_IRQn                 = 51,\
    Int052_IRQn                 = 52,\
    Int053_IRQn                 = 53,\
    Int054_IRQn                 = 54,\
    Int055_IRQn                 = 55,\
#define bM4_PORT_PFSRC10_FSEL3                    (*((volatile unsigned int*)(0x42A7954CUL)))\
"};
