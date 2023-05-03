import RPi.GPIO as g
import time 
g.setmode(g.BOARD)
channel=21
g.setup(channel,g.IN)
def callback(channel):
    if g.input(channel):
        print("Water detected")
    else:
        print("Water Not detected ")
g.add_event_detect(channel,g.BOTH,bouncetime=300)
g.add_event_callback(channel,callback)

while True:
    time.sleep(1)