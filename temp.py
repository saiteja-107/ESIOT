import sys
import Adafruit_DHT
import time
while True:
    h,t=Adafruit_DHT.read_retry(11,4)
    print(" Humidity : ", h, "\tTemperature:" ,t )
    time.sleep(1)
