from evdev import *
import evdev
dev = InputDevice('/dev/input/event0')
print(evdev.list_devices())
def getKey():
    print('in function')
    for event in dev.read_loop():
        if event.type == ecodes.EV_KEY:
            e = categorize(event)
            if e.keystate == e.key_down:
                yield e.keycode

keygenerator = getKey()
while 42:
    c = next(keygenerator)
    if c == 'KEY_Z': print('dosomething')
    if c == 'KEY_Q': print('dosomethingelse')

# or you could consume the generator directly in a for loop
#for c in getKey():
#   print(c)