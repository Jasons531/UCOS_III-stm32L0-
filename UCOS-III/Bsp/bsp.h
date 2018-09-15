/*
*********************************************************************************************************
*                                     MICIRUM BOARD SUPPORT PACKAGE
*
*                             (c) Copyright 2011; Micrium, Inc.; Weston, FL
*
*               All rights reserved.  Protected by international copyright laws.
*               Knowledge of the source code may NOT be used to develop a similar product.
*               Please help us continue to provide the Embedded community with the finest
*               software available.  Your honesty is greatly appreciated.
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                        BOARD SUPPORT PACKAGE
*
*                                     ST Microelectronics STM32L
*                                              on the
*
*                                          STM32L152-EVAL
*                                         Evaluation Board
*
* Filename      : bsp.h
* Version       : V1.00
* Programmer(s) : FF
*	  	          DC
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                                 MODULE
*
* Note(s) : (1) This header file is protected from multiple pre-processor inclusion through use of the
*               BSP present pre-processor macro definition.
*
*           (2) This file and its dependencies requires the following compilers to be compiled:
*			- IAR v6.20 or later
*			- Keil MDK µVision4 v4.54 or later
*			- Atollic TrueSTUDIO v3.1  Pro or later
*
*********************************************************************************************************
*/

#ifndef  BSP_PRESENT
#define  BSP_PRESENT


/*
*********************************************************************************************************
*                                                 EXTERNS
*********************************************************************************************************
*/

#ifdef   BSP_MODULE
#define  BSP_EXT
#else
#define  BSP_EXT  extern
#endif


/*
*********************************************************************************************************
*                                              INCLUDE FILES
*********************************************************************************************************
*/

#include  <stdio.h>
#include  <stdarg.h>

#include  <cpu.h>
#include  <cpu_core.h>

#include  <lib_def.h>
#include  <lib_ascii.h>

//#include  <stm32l1xx_gpio.h>
//#include  <stm32l1xx_rcc.h>

/*
*********************************************************************************************************
*                                               CONSTANTS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             PERIPH DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               DATA TYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                            GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                                 MACRO'S
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               INT DEFINES
*********************************************************************************************************
*/

#define  BSP_INT_ID_WWDG                                   0    /* Window WatchDog Interrupt                            */
#define  BSP_INT_ID_PVD                                    1    /* PVD through EXTI Line detection Interrupt            */
#define  BSP_INT_ID_TAMP_STAMP                             2    /* Tamper and TimeStamp Interrupt                       */
#define  BSP_INT_ID_RTC_WKUP                               3    /* RTC wakeup Interrupt through the EXTI line           */
#define  BSP_INT_ID_FLASH                                  4    /* FLASH global Interrupt                               */
#define  BSP_INT_ID_RCC                                    5    /* RCC global Interrupt                                 */
#define  BSP_INT_ID_EXTI0                                  6    /* EXTI Line0 Interrupt                                 */
#define  BSP_INT_ID_EXTI1                                  7    /* EXTI Line1 Interrupt                                 */
#define  BSP_INT_ID_EXTI2                                  8    /* EXTI Line2 Interrupt                                 */
#define  BSP_INT_ID_EXTI3                                  9    /* EXTI Line3 Interrupt                                 */
#define  BSP_INT_ID_EXTI4                                 10    /* EXTI Line4 Interrupt                                 */
#define  BSP_INT_ID_DMA1_CH1                              11    /* DMA1 Channel 1 global Interrupt                      */
#define  BSP_INT_ID_DMA1_CH2                              12    /* DMA1 Channel 2 global Interrupt                      */
#define  BSP_INT_ID_DMA1_CH3                              13    /* DMA1 Channel 3 global Interrupt                      */
#define  BSP_INT_ID_DMA1_CH4                              14    /* DMA1 Channel 4 global Interrupt                      */
#define  BSP_INT_ID_DMA1_CH5                              15    /* DMA1 Channel 5 global Interrupt                      */
#define  BSP_INT_ID_DMA1_CH6                              16    /* DMA1 Channel 6 global Interrupt                      */
#define  BSP_INT_ID_DMA1_CH7                              17    /* DMA1 Channel 7 global Interrupt                      */
#define  BSP_INT_ID_ADC1                                  18    /* ADC1 global Interrupt                                */
#define  BSP_INT_ID_USB_HP                                19    /* USB High priority interrupt                          */
#define  BSP_INT_ID_USB_LP                                20    /* USB Low priority interrupt                           */
#define  BSP_INT_ID_DAC                                   21    /* DAC Interrupt                                        */
#define  BSP_INT_ID_COMP                                  22    /* Comparator wakeup through EXTI line (21 & 22) int.   */
#define  BSP_INT_ID_EXTI9_5                               23    /* External Line[9:5] Interrupts                        */
#define  BSP_INT_ID_LCD                                   24    /* LCD global interrupt                                 */
#define  BSP_INT_ID_TIM9                                  25    /* TIM9 global interrupt                                */
#define  BSP_INT_ID_TIM10                                 26    /* TIM10 global interrupt                               */
#define  BSP_INT_ID_TIM11                                 27    /* TIM11 global interrupt                               */
#define  BSP_INT_ID_TIM2                                  28    /* TIM2 global Interrupt                                */
#define  BSP_INT_ID_TIM3                                  29    /* TIM3 global Interrupt                                */
#define  BSP_INT_ID_TIM4                                  30    /* TIM4 global Interrupt                                */
#define  BSP_INT_ID_I2C1_EV                               31    /* I2C1 Event Interrupt                                 */
#define  BSP_INT_ID_I2C1_ER                               32    /* I2C1 Error Interrupt                                 */
#define  BSP_INT_ID_I2C2_EV                               33    /* I2C2 Event Interrupt                                 */
#define  BSP_INT_ID_I2C2_ER                               34    /* I2C2 Error Interrupt                                 */
#define  BSP_INT_ID_SPI1                                  35    /* SPI1 global Interrupt                                */
#define  BSP_INT_ID_SPI2                                  36    /* SPI2 global Interrupt                                */
#define  BSP_INT_ID_USART1                                37    /* USART1 global Interrupt                              */
#define  BSP_INT_ID_USART2                                38    /* USART2 global Interrupt                              */
#define  BSP_INT_ID_USART3                                39    /* USART3 global Interrupt                              */
#define  BSP_INT_ID_EXTI15_10                             40    /* External Line[15:10] Interrupts                      */
#define  BSP_INT_ID_RTC_ALARM                             41    /* RTC Alarms (A and B) through EXTI Line Interrupt     */
#define  BSP_INT_ID_USB_FS_WKUP                           42    /* USB Device FS WakeUp through EXTI Line Interrupt     */
#define  BSP_INT_ID_TIM6                                  43    /* TIM6 global Interrupt                                */
#define  BSP_INT_ID_TIM7                                  44    /* TIM7 global Interrupt                                */

/*
*********************************************************************************************************
*                                   INT DEFINES FOR HIGH DENSITY DEVICES
*********************************************************************************************************
*/

#define  BSP_INT_ID_SDIO                                  45    /* SDIO global Interrupt                                */
#define  BSP_INT_ID_TIM5                                  46    /* TIM5 global Interrupt                                */
#define  BSP_INT_ID_SPI3                                  47    /* SPI3 global Interrupt                                */
#define  BSP_INT_ID_UART4                                 48    /* UART4 global Interrupt                               */
#define  BSP_INT_ID_UART5                                 49    /* UART5 global Interrupt                               */
#define  BSP_INT_ID_DMA2_CH1                              50    /* DMA2 Channel 1 Interrupt                             */
#define  BSP_INT_ID_DMA2_CH2                              51    /* DMA2 Channel 2 Interrupt                             */
#define  BSP_INT_ID_DMA2_CH3                              52    /* DMA2 Channel 3 Interrupt                             */
#define  BSP_INT_ID_DMA2_CH4                              53    /* DMA2 Channel 4 Interrupt                             */
#define  BSP_INT_ID_DMA2_CH5                              54    /* DMA2 Channel 5 Interrupt                             */
#define  BSP_INT_ID_AES                                   55    /* AES global Interrupt                                 */
#define  BSP_INT_ID_COMP_ACQ                              56    /* Comparator Channel Acquisition Interrupt             */

/*
*********************************************************************************************************
*                                             PERIPH DEFINES
*********************************************************************************************************
*/

#define  BSP_PERIPH_ID_GPIOA                               0
#define  BSP_PERIPH_ID_GPIOB                               1
#define  BSP_PERIPH_ID_GPIOC                               2
#define  BSP_PERIPH_ID_GPIOD                               3
#define  BSP_PERIPH_ID_GPIOE                               4
#define  BSP_PERIPH_ID_GPIOH                               5
#define  BSP_PERIPH_ID_GPIOF                               6
#define  BSP_PERIPH_ID_GPIOG                               7
#define  BSP_PERIPH_ID_CRC                                12
#define  BSP_PERIPH_ID_FLITF                              15
#define  BSP_PERIPH_ID_DMA1                               24
#define  BSP_PERIPH_ID_DMA2                               25
#define  BSP_PERIPH_ID_AES                                27
#define  BSP_PERIPH_ID_FSMC                               30

#define  BSP_PERIPH_ID_SYSCFG                             32
#define  BSP_PERIPH_ID_TIM9                               34
#define  BSP_PERIPH_ID_TIM10                              35
#define  BSP_PERIPH_ID_TIM11                              36
#define  BSP_PERIPH_ID_ADC1                               41
#define  BSP_PERIPH_ID_SDIO                               43
#define  BSP_PERIPH_ID_SPI1                               44
#define  BSP_PERIPH_ID_USART1                             46

#define  BSP_PERIPH_ID_TIM2                               64
#define  BSP_PERIPH_ID_TIM3                               65
#define  BSP_PERIPH_ID_TIM4                               66
#define  BSP_PERIPH_ID_TIM5                               67
#define  BSP_PERIPH_ID_TIM6                               68
#define  BSP_PERIPH_ID_TIM7                               69
#define  BSP_PERIPH_ID_LCD                                73
#define  BSP_PERIPH_ID_WWDG                               75
#define  BSP_PERIPH_ID_SPI2                               78
#define  BSP_PERIPH_ID_SPI3                               79
#define  BSP_PERIPH_ID_USART2                             81
#define  BSP_PERIPH_ID_USART3                             82
#define  BSP_PERIPH_ID_USART4                             83
#define  BSP_PERIPH_ID_USART5                             84
#define  BSP_PERIPH_ID_I2C1                               85
#define  BSP_PERIPH_ID_I2C2                               86
#define  BSP_PERIPH_ID_USB                                87
#define  BSP_PERIPH_ID_PWR                                92
#define  BSP_PERIPH_ID_DAC                                93
#define  BSP_PERIPH_ID_COMP                               95

/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/

void        BSP_Init                          (void);

void        BSP_IntDisAll                     (void);

CPU_INT32U  BSP_CPU_ClkFreq                   (void);

/*
*********************************************************************************************************
*                                           INTERRUPT SERVICES
*********************************************************************************************************
*/

void        BSP_IntInit                       (void);

void        BSP_IntEn                         (CPU_DATA       int_id);

void        BSP_IntDis                        (CPU_DATA       int_id);

void        BSP_IntClr                        (CPU_DATA       int_id);

void        BSP_IntVectSet                    (CPU_DATA       int_id,
                                               CPU_FNCT_VOID  isr);

void        BSP_IntPrioSet                    (CPU_DATA       int_id,
                                               CPU_INT08U     prio);

void         BSP_IntHandlerWWDG               (void);
void         BSP_IntHandlerPVD                (void);
void         BSP_IntHandlerTAMP_STAMP         (void);
void         BSP_IntHandlerRTC_WKUP           (void);
void         BSP_IntHandlerFLASH              (void);
void         BSP_IntHandlerRCC                (void);
void         BSP_IntHandlerEXTI0              (void);
void         BSP_IntHandlerEXTI1              (void);
void         BSP_IntHandlerEXTI2              (void);
void         BSP_IntHandlerEXTI3              (void);
void         BSP_IntHandlerEXTI4              (void);
void         BSP_IntHandlerDMA1_CH1           (void);
void         BSP_IntHandlerDMA1_CH2           (void);
void         BSP_IntHandlerDMA1_CH3           (void);
void         BSP_IntHandlerDMA1_CH4           (void);
void         BSP_IntHandlerDMA1_CH5           (void);
void         BSP_IntHandlerDMA1_CH6           (void);
void         BSP_IntHandlerDMA1_CH7           (void);
void         BSP_IntHandlerADC1               (void);
void         BSP_IntHandlerUSB_HP             (void);
void         BSP_IntHandlerUSB_LP             (void);
void         BSP_IntHandlerDAC                (void);
void         BSP_IntHandlerCOMP               (void);
void         BSP_IntHandlerEXTI9_5            (void);
void         BSP_IntHandlerLCD                (void);
void         BSP_IntHandlerTIM9               (void);
void         BSP_IntHandlerTIM10              (void);
void         BSP_IntHandlerTIM11              (void);
void         BSP_IntHandlerTIM2               (void);
void         BSP_IntHandlerTIM3               (void);
void         BSP_IntHandlerTIM4               (void);
void         BSP_IntHandlerI2C1_EV            (void);
void         BSP_IntHandlerI2C1_ER            (void);
void         BSP_IntHandlerI2C2_EV            (void);
void         BSP_IntHandlerI2C2_ER            (void);
void         BSP_IntHandlerSPI1               (void);
void         BSP_IntHandlerSPI2               (void);
void         BSP_IntHandlerUSART1             (void);
void         BSP_IntHandlerUSART2             (void);
void         BSP_IntHandlerUSART3             (void);
void         BSP_IntHandlerEXTI15_10          (void);
void         BSP_IntHandlerRTCAlarm           (void);
void         BSP_IntHandlerUSB_FS_WKUP        (void);
void         BSP_IntHandlerTIM6               (void);
void         BSP_IntHandlerTIM7               (void);

void         BSP_IntHandlerSDIO               (void);
void         BSP_IntHandlerTIM5               (void);
void         BSP_IntHandlerSPI3               (void);
void         BSP_IntHandlerUART4              (void);
void         BSP_IntHandlerUART5              (void);
void         BSP_IntHandlerDMA2_CH1           (void);
void         BSP_IntHandlerDMA2_CH2           (void);
void         BSP_IntHandlerDMA2_CH3           (void);
void         BSP_IntHandlerDMA2_CH4           (void);
void         BSP_IntHandlerDMA2_CH5           (void);
void         BSP_IntHandlerAES                (void);
void         BSP_IntHandlerCOMP_ACQ           (void);

/*
*********************************************************************************************************
*                                     PERIPHERAL POWER/CLOCK SERVICES
*********************************************************************************************************
*/

CPU_INT32U   BSP_PeriphClkFreqGet        (CPU_DATA       pwr_clk_id);

void         BSP_PeriphEn                (CPU_DATA       pwr_clk_id);

void         BSP_PeriphDis               (CPU_DATA       pwr_clk_id);

/*
*********************************************************************************************************
*                                              LED SERVICES
*********************************************************************************************************
*/

void        BSP_LED_On                        (CPU_INT08U     led);

void        BSP_LED_Off                       (CPU_INT08U     led);

void        BSP_LED_Toggle                    (CPU_INT08U     led);

/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/


#endif                                                          /* End of module include.                               */

