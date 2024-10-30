# ESP32 NAT Router Binaries

This repository contains pre-built binaries for the ESP32 NAT Router. The binaries are located in the `esp32_s2_binaries` folder.

## Usage

To use the pre-built binaries, simply navigate to the `esp32_s2_binaries` folder and follow the instructions provided in the documentation or the comments within the folder.

## Building from Source

If you wish to modify or compile the project yourself, follow these steps:

### Prerequisites

1. **Install ESP-IDF**: Make sure you have the ESP-IDF (Espressif IoT Development Framework) installed. You can find the installation instructions [here](https://docs.espressif.com/projects/esp-idf/en/latest/esp32s2/get-started/index.html).

2. **Set up the environment**: Source the ESP-IDF environment setup script. For example:
   ```sh
   source /opt/esp-idf/export.sh
   ```

# Build Instructions

1. **Set the target**
```sh
Copyidf.py set-target esp32s2
```
2. **Build the project**
```sh
Copyidf.py build
```
3. **Flash the firmware**

```sh
Copysudo esptool.py --chip esp32s2 -b 460800 --before default_reset --after hard_reset write_flash --flash_mode dio --flash_size 2MB --flash_freq 80m 0x1000 path/to/bootloader.bin 0x8000 path/to/partition-table.bin 0x10000 path/to/esp32_nat_router.bin
```

Other Than This, this fork is same as the original repo, I made this just to keep a memory to save the commands just in case someone needs them.  

Make sure to support the original developer of this project: https://github.com/martin-ger
