/*
 * os_kernel_cfg.h
 *
 *  Created on: Aug 26, 2015
 *      Author: tz68d9
 */

#ifndef OS_KERNEL_CFG_H_
#define OS_KERNEL_CFG_H_


#define PTHREAD_PRIO_MAX 5                //!< Maximal priority thread level [0,31]
#define PTHREAD_DEFAULT_STACK_SIZE 256/4  //!< Default stack size is 256 bytes
#define PTHREAD_MEMORY_QUALIFIER          //!< None or global a8, a9 which are reserved for RTOS
#define PTHREAD_DEFAULT_ATTR {SUPER, CALL_DEPTH_OVERFLOW_AT_64, PTHREAD_DEFAULT_STACK_SIZE} //!< Default thread attributes: Supervisor mode, call depth = 64, default stack size
#define PTHREAD_SWAP_HANDLER 0            //!< 0 = no swap handler installed
#define PTHREAD_COND_TIMEDWAIT_SIZE 8     //!< Number of conditions that can wait for a period to be elapsed
#define PTHREAD_USER_INT_LEVEL 3          //!< Maximal interrupt level for routines that are managed by the library

typedef unsigned int   uint32_t;    // 4 byte unsigned; prefix: uw


//#define PCXI	0xfe00	/* Previous Context Information Register  */
//#define NULL (void*)0

#endif /* OS_KERNEL_CFG_H_ */
