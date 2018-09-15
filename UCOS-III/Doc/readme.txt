
移植：

注意可以从官方网站下载Cortex-M0代码进行移植，或者使用已有代码移植

1：uC-CPU、uC-LIB、uCOS-III：按照官方代码复制(cotemx m架构要一致)注意汇编文件选择MDK编译器地址为：RealView例如，如下地址
\Software\uC-CPU\ARM-Cortex-M0\RealView

2：添加官方例程中BSP---bsp.c到BSP文件


3：APP添加官方工程例子内uCOS-III内部文件：app.c os_app_hooks.c  cpu_cfg.h  includes.h os_app_hooks.h
os_cfg.h		os_cfg_app.h

4：修改startup_stm32lo72xx.s将 PendSV_Handler 改为 OS_CPU_PendSVHandler  
							   SysTick_Handler 改为 OS_CPU_SysTickHandler

将stm3210xxit.c中PendSV_Handler、SysTick_Handler注释掉

5：修改系统定时器：BSP_CPU_ClkFreq()

6:添加系统定时器处理：OS_CPU_SysTickHandler() --- HAL_IncTick, HAL_SYSTICK_IRQHandler