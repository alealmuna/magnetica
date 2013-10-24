#!/usr/bin/python

import sys
import serial
from time import sleep


def openDoor():
    ardu.write('2')

ardu = serial.Serial('/dev/ttyUSB0', 9600)
sleep(0.5)
if len(sys.argv) > 2:
    mode = sys.argv[1]
    if mode == '-w':
        options = sys.argv[2]
        ardu.write('1' + options)
elif len(sys.argv) == 2:
    mode = sys.argv[1]
    if mode == '-od':
        openDoor()
