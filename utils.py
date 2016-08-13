def dump(addr):
    a = bytearray(16)
    for i in range(16):
        a[i] = stm.mem8[addr+i]
    out = "%08x: " % addr
    for b in a:                                                             
        out = out + ("%02x " % b)                                           
    for b in a:                                                             
        out = out + (("%c" % b) if b>31 and b<127 else ".")                 
    print(out)
    
@micropython.asm_thumb
def addr(r0):
    mov(r0,r0)

@micropython.asm_thumb
def call(r0):
    data(2,0x4780) # "blx r0"

@micropython.asm_thumb
def call_inc(r0):
    data(2,0x3001,0x4780) # add r0,#1 : blx r0
