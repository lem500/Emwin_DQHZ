#ifndef _FLASH_H
#define _FLASH_H#include "datastruct.h"
/********************************************************************** SPI FLASH �洢����***********************************************************************/#define  SPIFLASH_SECTOR_SIZE              4096 //�����ֽڴ�С 4096�ֽ�
#define  SPIFLASH_FONT_BASEADDR            4096#define  SPIFLASH_FONT_SECTORS             8    //�ֿ���������#define  SPIFLASH_SYS_SET_BASEADDR         (SPIFLASH_FONT_BASEADDR + SPIFLASH_FONT_SECTORS*4096)
#define  SPIFLASH_SYS_SET_BYTES            256 //ϵͳ����
/**************************************************************************** SPI FLASH �ӿں�������*****************************************************************************/extern unsigned char Flash_Write_SysSet(unsigned char *sys );extern void Flash_Read_SysSet(unsigned char *sys);/*************************************************************************/extern SYSTEM_CONFIG system_config;/**************************************************************************/
#endif

