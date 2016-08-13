import pyb
@micropython.asm_thumb
def q(r0):
    data(2,12289,18304)
pyb.Pin(pyb.Pin.cpu.D12,1)
pyb.Timer(1,freq=250000)
q(open("play-raw").read())
