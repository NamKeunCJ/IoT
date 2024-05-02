import serial
import time

#Connection to serial port
conn=serial.Serial('COM13',9600)

#Turn on led 
conn.write(b'1')
time.sleep(1)

#Turn off led 
conn.write(b'0')
time.sleep(5)

#Close connection
conn.close()