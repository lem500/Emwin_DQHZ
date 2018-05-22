#ifndef _FLASH_H
#define _FLASH_H#include "datastruct.h"
/********************************************************************** SPI FLASH 存储分配***********************************************************************/#define  SPIFLASH_SECTOR_SIZE              4096 //扇区字节大小 4096字节
#define  SPIFLASH_FONT_BASEADDR            4096#define  SPIFLASH_FONT_SECTORS             8    //字库扇区数量#define  SPIFLASH_SYS_SET_BASEADDR         (SPIFLASH_FONT_BASEADDR + SPIFLASH_FONT_SECTORS*4096)
#define  SPIFLASH_SYS_SET_BYTES            256 //系统配置
/**************************************************************************** SPI FLASH 接口函数声明*****************************************************************************/extern unsigned char Flash_Write_SysSet(unsigned char *sys );extern void Flash_Read_SysSet(unsigned char *sys);/*************************************************************************/extern SYSTEM_CONFIG system_config;/**************************************************************************/
#endif

