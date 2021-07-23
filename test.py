from sharedPtrPy import *
import sys

print("cb = Child('childB')")
cb = Child('childB')
print("p = Parent('p')")
p = Parent('p')
print('p.setChild(cb)')
p.setChild(cb)
print('sys.exit(0)')
sys.exit(0)

print("vp = ViewPlane('vp')")
vp = ViewPlane('vp')
print("rj = RenderJob('rj')")
rj = RenderJob('rj')
print('rj.setViewPlane(vp)')
rj.setViewPlane(vp)
print('sys.exit(0)')
sys.exit(0)

