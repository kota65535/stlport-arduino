# stlport-arduino

stlport C++ standard library for use with AVR microcontroller, especially with Arduino.

## Requirements

* [Arduino-IDE](https://www.arduino.cc/en/Main/Software)
* [Arduino-Makefile](https://github.com/sudar/Arduino-Makefile)

This library needs to be built as static library, and you have to link it on compiling sketch.
Because Arduino-IDE's build-system does not support linking static libraries,
you have to use more flexible command line build-systems, such as [Arduino-Makefile](https://github.com/sudar/Arduino-Makefile), [ino](http://inotool.org/), [platformIO](http://platformio.org).
In the future, I will add instructions for ino and platformIO if available.

## How to build and install (Arduino-Makefile)

1. Clone the repository:

```
$ git clone https://github.com/kota65535/stlport-arduino ~/
```

2. Copy the file `STLport.mk` to the same directory where your Makefile is.

3. In your Makefile, you need to set variable `STLPORT_DIR`, the directory of the cloned repository.
And include `STLport.mk` at the end of the Makefile. For example, your Makefile may be as follows:

```
# board information
BOARD_TAG     := mega
BOARD_SUB     := atmega2560
ARCHITECTURE  := avr

# Arduino configurations
ARDMK_DIR     := /opt/Arduino-Makefile
ARDUINO_DIR   := /opt/arduino-1.6.7
MONITOR_PORT  := /dev/ttyACM0

USER_LIB_PATH := /opt/libs

include $(ARDMK_DIR)/Arduino.mk

# stlport directory where you cloned
STLPORT_DIR := $(HOME)/stlport-arduino
include STLport.mk
```

4. To build stlport static library file, run the following command:

```
$ make stlport
```

This will also install static library `libstlport.a` to the current directory.

5. To install headers as user library of Arduino, run the following command:

```
$ make stlport-install-header
```

## How to use

To link `libstlport.a` with your sketch, you can use `$LINKER_SCRIPT` variable.
Add current directory to the library search path and link it.

```
# board information
BOARD_TAG     := mega
BOARD_SUB     := atmega2560
ARCHITECTURE  := avr

# Arduino configurations
ARDMK_DIR     := /opt/Arduino-Makefile
ARDUINO_DIR   := /opt/arduino-1.6.7
MONITOR_PORT  := /dev/ttyACM0

USER_LIB_PATH := /opt/libs
ARDUINO_LIBS  := stlport
LINKER_SCRIPTS = -L. -lstlport

include $(ARDMK_DIR)/Arduino.mk

# stlport directory where you cloned
STLPORT_DIR := $(HOME)/stlport-arduino
include STLport.mk
```

