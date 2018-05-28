#ifndef _SERIAL_H
#define _SERIAL_H


#include <windows.h>
#include <winbase.h>
#include <winnt.h>
#define MAX_SERAIL_LENGHT      2048
extern void serial_rec(void);
extern void serail_send(unsigned char *data,unsigned char len);
extern void serial_init(void);extern HANDLE Serial_HRead,Serial_HWrite;
#endif


