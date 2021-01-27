#ifndef __ROTATE_H__
#define __ROTATE_H__

#include <rtthread.h>
#include <board.h>
#include "mag.h"
#include "moebus.h"

#define heading_Kp 20
#define heading_Ki 10

// #define min(a,b) ((a<b)?a:b)
// #define max(a,b) ((a>b)?a:b)
// #define confine(amt,low,high)     (max(min(amt, high),low))

#define heading_MAX_Z_SPD 1

#endif