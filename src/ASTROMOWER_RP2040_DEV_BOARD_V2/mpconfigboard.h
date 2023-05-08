/* AstroMower RP2040 Dev Board v2

Copyright 2023 Thomas Hawryik

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#define MICROPY_HW_BOARD_NAME          "AstroMower RP2040 Dev Board v2"
#define MICROPY_HW_FLASH_STORAGE_BYTES (7 * 1024 * 1024)

#define MICROPY_HW_UART1_TX  (20)
#define MICROPY_HW_UART1_RX  (5)
#define MICROPY_HW_UART1_CTS (10)
#define MICROPY_HW_UART1_RTS (7)

#define MICROPY_HW_I2C1_SCL  (23)
#define MICROPY_HW_I2C1_SDA  (22)

