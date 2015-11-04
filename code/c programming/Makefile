# Makefile for TinyMatrix

NAME	   = TinyMatrix
OBJECTS    = $(NAME).o
DEVICE     = attiny2313
CLOCK      = 4000000
FUSES      = -U hfuse:w:0xDF:m -U lfuse:w:0xE2:m
#PROGRAMMER = arduino
PROGRAMMER = avrispmkii
#PROG_PORT  = /dev/ttyUSB0
PROG_PORT  = usb

# -b 19200
AVRDUDE = avrdude -c $(PROGRAMMER) -P $(PROG_PORT) -p t2313 -B 8
COMPILE = avr-gcc -Wall -Os -DF_CPU=$(CLOCK) -mmcu=$(DEVICE)

# symbolic targets:
all:	$(NAME).hex

.c.o:
	$(COMPILE) -c $< -o $@

flash:	all
	$(AVRDUDE) -U flash:w:$(NAME).hex:i

fuse:
	$(AVRDUDE) $(FUSES)

clean:
	rm -f $(NAME).hex $(NAME).elf $(OBJECTS)

# file targets:
$(NAME).elf: $(OBJECTS)
	$(COMPILE) -o $(NAME).elf $(OBJECTS)

$(NAME).hex: $(NAME).elf
	rm -f $(NAME).hex
	avr-objcopy -j .text -j .data -O ihex $(NAME).elf $(NAME).hex


