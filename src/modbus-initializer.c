#include "modbus-initializer.h"
#include "modbus-config.h"

/**
 * @brief Get the default Modbus communication information.
 *
 * This function initializes and returns a structure containing the default
 * communication settings for Modbus, including mode, baud rate, parity, and port number.
 *
 * @return A structure of type mb_communication_info_t containing the default Modbus communication settings.
 */
mb_communication_info_t hs_modbus_get_default_mb_communication_info() {
    mb_communication_info_t info = {
        .mode = MODBUS_MODE,
        .baudrate = MODBUS_UART_BAUDRATE,
        .parity = MB_PARITY_NONE,
        .port = MODBUS_UART_PORT_NUMBER,
    };
    return info;
}