/* CMSIS-DAP Interface Firmware
 * Copyright (c) 2009-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <string.h>

#include "main.h"
#include "version.h"
#include "board.h"
#include "mbed_htm.h"
#include "read_uid.h"

extern uint8_t usb_buffer[];

uint8_t string_auth[4 + 8] = {
'$', '$', '$', 8, 
'2', '0', '1', '3', '1', '2', '1', '7'
};
uint8_t string_auth_descriptor[8*2 + 2] = {
'2', 0, '0', 0, '1', 0, '3', 0, '1', 0, '2', 0, '1', 0, '7', 0, 0, 0
};

uint8_t * get_uid_string(void) {
    return string_auth;
}

uint8_t get_len_string_interface(void) {
    return 2 + strlen((const char *)(string_auth+4))*2;
}

uint8_t * get_uid_string_interface(void) {
    return string_auth_descriptor;
}


uint8_t update_html_file(void) {
    memcpy(usb_buffer, WebSide, sizeof(WebSide));
    memset(usb_buffer + sizeof(WebSide), ' ', 512 - sizeof(WebSide));
    
    return 1;  // Success
}
