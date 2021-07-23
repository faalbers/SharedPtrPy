from sharedPtrPy import *
import sys

print("c = Child('c')")
c = Child('c')
print("p = Parent('p')")
p = Parent('p')
print('p.setChild(c)')
p.setChild(c)
print('sys.exit(0)')
sys.exit(0)
