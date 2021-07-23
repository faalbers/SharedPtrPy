from sharedPtrPy import *
import sys

class ChildP:
    def __init__(self):
        print('==> ChildP')

    def __del__(self):
        print('<== ChildP')

class BarrierP:
    def __init__(self):
        print('==> BarrierP')

    def __del__(self):
        print('<== BarrierP')

class ParentP:
    def __init__(self):
        print('==> ParentP')

    def __del__(self):
        print('<== ParentP')

#cp = ChildP('dfg')
#bp = BarrierP()
#cpp = ParentP()

cb = Child('childB')
cc = Child('childC')
b = Barrier('b')
p = Parent('p')
p.setChildB(cb)
p.setChildB(cc)

sys.exit(0)
