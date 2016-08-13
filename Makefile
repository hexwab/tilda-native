CC=arm-none-eabi-gcc
CFLAGS=-Tlinkscr -mthumb -mcpu=cortex-m4  -nostdlib -fPIE

all: test count play test-raw count-raw play-raw play-native

clean:
	-rm -f *-raw test count play play-native

%-raw: %
	arm-none-eabi-objcopy $< -O binary $@

play:
	$(CC) $(CFLAGS) -DTILDA -O3 play.c -o play

play-native:
	gcc -O3 play.c -o play-native

play-test: play-native
	./play-native | play -t s8 -r 250000 -
