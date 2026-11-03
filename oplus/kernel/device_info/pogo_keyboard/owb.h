#ifndef  __ONE_WIRE_BUS_PHY_H__
#define  __ONE_WIRE_BUS_PHY_H__
#include <linux/kernel.h>
#include <linux/random.h>

#define ONE_WIRE_BUS_SIMPLE_PROTOCOL

/**
 * @brief start sync word of a data frame
 */
#define  ONE_WIRE_BUS_PACKET_HEAD_SYNC_CODE        0x55


/**
 * @brief end sync word of a data frame
 */
#define  ONE_WIRE_BUS_PACKET_TAIL_SYNC_CODE        0xAA


/**
 * @brief start marker of a data frame, XXX project
 */
#define  ONE_WIRE_BUS_PACKET_XXX_START_CODE       0xF1

/**
 * @brief start marker of a retransmitted data frame, XXX project
 */
#define  ONE_WIRE_BUS_PACKET_XXX_REPEAT_CODE      0xF2

/**
 * @brief end marker of a data frame
 */
#define  ONE_WIRE_BUS_PACKET_XXX_END_CODE         0xFE

/**
 * @brief packet comes from the keyboard
 */
#define  ONE_WIRE_BUS_PACKET_KEYBOARD_ADDR         0xA1

/**
 * @brief packet comes from the PAD
 */
#define  ONE_WIRE_BUS_PACKET_PAD_ADDR              0xA2


//==============================one-wire bus packet main commands=====================================
typedef enum
{
    ONE_WIRE_BUS_PACKET_GENRRAL_KEY_CMD          = 0x01, //regular key upload
    ONE_WIRE_BUS_PACKET_MEDIA_KEY_CMD            = 0x02, //media key upload
    ONE_WIRE_BUS_PACKET_TOUCHPAD_CMD             = 0x03, //TP data upload
    ONE_WIRE_BUS_PACKET_MOUSE_CMD                = 0x04, //mouse data upload
    ONE_WIRE_BUS_PACKET_GSENSOR_CMD              = 0x05, //Gsensor data upload
    ONE_WIRE_BUS_PACKET_COUSTOM_CMD              = 0x06, //custom data upload
    ONE_WIRE_BUS_PACKET_PARAM_SET_CMD            = 0x20, //parameter set
    ONE_WIRE_BUS_PACKET_PARAM_SET_ACK_CMD        = 0x21, //parameter set ack
    ONE_WIRE_BUS_PACKET_STATUS_READ_CMD          = 0x22, //status read
    ONE_WIRE_BUS_PACKET_STATUS_READ_ACK_CMD      = 0x23, //status read ack
    ONE_WIRE_BUS_PACKET_OTA_CMD                  = 0x24, //OTA upgrade
    ONE_WIRE_BUS_PACKET_OTA_ACK_CMD              = 0x25, //OTA upgrade ack
    ONE_WIRE_BUS_PACKET_SOFT_RESET_CMD           = 0x2A, //software reset
    ONE_WIRE_BUS_PACKET_SOFT_RESET_ACK_CMD       = 0x2B, //software reset ack
    ONE_WIRE_BUS_PACKET_LOWPOWER_CMD             = 0x2C, //low power
    ONE_WIRE_BUS_PACKET_LOWPOWER_ACK_CMD         = 0x2D, //low power ack
    ONE_WIRE_BUS_PACKET_SYNC_DOWNLOAD_CMD        = 0x2E, //host downlink sync packet
    ONE_WIRE_BUS_PACKET_SYNC_UPLOAD_CMD          = 0x2F, //keyboard uplink sync packet
    ONE_WIRE_BUS_PACKET_SOFT_DEBUG_CMD           = 0x30, //software debug
    ONE_WIRE_BUS_PACKET_SOFT_DEBUG_ACK_CMD       = 0x31, //software debug ack
    ONE_WIRE_BUS_PACKET_I2C_WRITE_CMD            = 0x34, //I2C write command
    ONE_WIRE_BUS_PACKET_I2C_WRITE_ACK_CMD        = 0x35, //I2C write command ack
    ONE_WIRE_BUS_PACKET_I2C_READ_CMD             = 0x36, //I2C read command
    ONE_WIRE_BUS_PACKET_I2C_READ_ACK_CMD         = 0x37, //I2C read command ack
    ONE_WIRE_BUS_PACKET_USER_PASSTHROUGH_CMD     = 0x38, //user passthrough command
    ONE_WIRE_BUS_PACKET_USER_PASSTHROUGH_ACK_CMD = 0x39, //user passthrough command ack
    ONE_WIRE_BUS_PACKET_USER_GENERAL_CMD         = 0x3A, //user general command
    ONE_WIRE_BUS_PACKET_USER_GENERAL_ACK_CMD     = 0x3B, //user general command ack
}em_one_wire_bus_package_main_cmd_t;

typedef enum
{
    ONE_WIRE_BUS_PACKET_USER_GENERAL_SLEEP_CMD      = 0x02, //sleep/wake notification
    ONE_WIRE_BUS_PACKET_USER_GENERAL_KB_ENABLE_CMD   = 0x03, //keyboard disabled state
    ONE_WIRE_BUS_PACKET_USER_GENERAL_NFC_ENABLE_CMD   = 0x06, //NFC on/off command
    ONE_WIRE_BUS_PACKET_USER_GENERAL_NFC_DATAS_CMD   = 0x07, //NFC data
    ONE_WIRE_BUS_PACKET_USER_GENERAL_BATTERY_LEVEL_CMD   = 0x08, //battery voltage and level query
    ONE_WIRE_BUS_PACKET_USER_GENERAL_CHARGER_LEVEL_CMD   = 0x09, //charging voltage and current query
    ONE_WIRE_BUS_PACKET_USER_GENERAL_SN_CMD   = 0x0B, //keyboard SN
    ONE_WIRE_BUS_PACKET_USER_GENERAL_TP_STATUS_CMD   = 0x0C, //TP disabled state report
    ONE_WIRE_BUS_PACKET_USER_GENERAL_BATTERY_STATUS_CMD   = 0x0E, //battery level and state report
    ONE_WIRE_BUS_PACKET_USER_GENERAL_TP_DISABLE_CMD   = 0x11, //TP disabled state downlink
    ONE_WIRE_BUS_PACKET_USER_GENERAL_TP_OTA_STATUS_CMD   = 0x16, //TP upgrade state report
    ONE_WIRE_BUS_PACKET_USER_GENERAL_TP_OTA_DFU_CMD   = 0x18, //TP upgrade transfer
    ONE_WIRE_BUS_PACKET_USER_GENERAL_TP_DIST_CMD   = 0x1A, //TP debug data report
}em_one_wire_bus_package_general_cmd_sub_cmd_t;

typedef enum
{
    ONE_WIRE_BUS_PACKET_USER_PASSTHROUGH_KBVER_CMD  = 0x08, //keyboard version
    ONE_WIRE_BUS_PACKET_USER_PASSTHROUGH_DFU_OTA_CMD    = 0x0a, //keyboard version
}em_one_wire_bus_package_passthrough_cmd_sub_cmd_t;

#endif

/* [] END OF FILE */

