from machine import Pin, SoftI2C
import SI5351

PIN_SCL = 1
PIN_SDA = 0

i2c = SoftI2C(scl=Pin(PIN_SCL), sda=Pin(PIN_SDA), freq = 100000)

clockgen = SI5351.SI5351( i2c)
clockgen.begin()

clockgen.setupPLL(24, 0, 1, pllsource='A') # 600MHz

# 600MHz / 30 = 20MHz
clockgen.setupMultisynth( output=0, div=30, num=0, denom=1, pllsource="A")

clockgen.PLLsoftreset()
clockgen.enableOutputs()
