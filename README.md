# curiosity_nano
# Compilation

avr-gcc -mmcu=atmega4809 -B Atmel.ATmega_DFP.2.0.401/gcc/dev/atmega4809 -I Atmel.ATmega_DFP.2.0.401/include/ -Os main.c -o main.elf && avr-objcopy -O ihex main.elf main.hex

# Flashing

pymcuprog write -d atmega4809 -f main.hex --erase
