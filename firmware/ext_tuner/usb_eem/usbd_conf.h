/**
  ******************************************************************************
  * @file    usbd_conf.h
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    19-September-2011
  * @brief   USB Device configuration file
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USBD_CONF__H__
#define __USBD_CONF__H__

/* Includes ------------------------------------------------------------------*/
#include   "stm32f4_discovery.h"


#define USBD_CFG_MAX_NUM           1
#define USBD_ITF_MAX_NUM           2


#define USB_MAX_STR_DESC_SIZ       64 



#define USBD_DYNAMIC_DESCRIPTOR_CHANGE_ENABLED 

#define CDC_IN_EP                       0x81  /* EP1 for data IN */
#define CDC_OUT_EP                      0x01  /* EP1 for data OUT */
#define CDC_CMD_EP                      0x82  /* EP2 for CDC commands */

#define EEM_IN_EP                       0x83  /* EP3 for data IN */
#define EEM_OUT_EP                      0x03  /* EP3 for data OUT */

	/* CDC Endpoints parameters: you can fine tune these values depending on the needed baudrates and performance. */
#ifdef USE_USB_OTG_HS
	#define CDC_DATA_MAX_PACKET_SIZE       512  /* Endpoint IN & OUT Packet size */
	#define CDC_CMD_PACKET_SZE             8    /* Control Endpoint Packet size */

	#define CDC_IN_FRAME_INTERVAL          40   /* Number of micro-frames between IN transfers */
	#define APP_RX_DATA_SIZE               2048 /* Total size of IN buffer */
#else
	#define CDC_DATA_MAX_PACKET_SIZE       64   /* Endpoint IN & OUT Packet size */
	#define CDC_CMD_PACKET_SZE             8    /* Control Endpoint Packet size */

	#define CDC_IN_FRAME_INTERVAL          5    /* Number of frames between IN transfers */
	#define APP_RX_DATA_SIZE               2048 /* Total size of IN buffer */
#endif /* USE_USB_OTG_HS */

#define APP_FOPS                        VCP_fops


#endif //__USBD_CONF__H__

/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/

