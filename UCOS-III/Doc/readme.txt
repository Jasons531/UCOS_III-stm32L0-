
��ֲ��

ע����Դӹٷ���վ����Cortex-M0���������ֲ������ʹ�����д�����ֲ

1��uC-CPU��uC-LIB��uCOS-III�����չٷ����븴��(cotemx m�ܹ�Ҫһ��)ע�����ļ�ѡ��MDK��������ַΪ��RealView���磬���µ�ַ
\Software\uC-CPU\ARM-Cortex-M0\RealView

2����ӹٷ�������BSP---bsp.c��BSP�ļ�


3��APP��ӹٷ�����������uCOS-III�ڲ��ļ���app.c os_app_hooks.c  cpu_cfg.h  includes.h os_app_hooks.h
os_cfg.h		os_cfg_app.h

4���޸�startup_stm32lo72xx.s�� PendSV_Handler ��Ϊ OS_CPU_PendSVHandler  
							   SysTick_Handler ��Ϊ OS_CPU_SysTickHandler

��stm3210xxit.c��PendSV_Handler��SysTick_Handlerע�͵�

5���޸�ϵͳ��ʱ����BSP_CPU_ClkFreq()

6:���ϵͳ��ʱ������OS_CPU_SysTickHandler() --- HAL_IncTick, HAL_SYSTICK_IRQHandler