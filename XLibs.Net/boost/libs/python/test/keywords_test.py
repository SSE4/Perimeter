'''
>>> from keywords import *
>>> f = Foo()
>>> f.a(), f.b(), f.n()
(0, 0.0, '')
>>> f = Foo(1)
>>> f.a(), f.b(), f.n()
(1, 0.0, '')
>>> f = Foo(1,1.0)
>>> f.a(), f.b(), f.n()
(1, 1.0, '')
>>> f = Foo(1,1.0,"1")
>>> f.a(), f.b(), f.n()
(1, 1.0, '1')
>>> f = Foo(a=1)
>>> f.a(), f.b(), f.n()
(1, 0.0, '')
>>> f = Foo(b=1)
>>> f.a(), f.b(), f.n()
(0, 1.0, '')
>>> f = Foo(n="1")
>>> f.a(), f.b(), f.n()
(0, 0.0, '1')
>>> f = Foo(1,n="1")
>>> f.a(), f.b(), f.n()
(1, 0.0, '1')
>>> f.set()
>>> f.a(), f.b(), f.n()
(0, 0.0, '')
>>> f.set(1)
>>> f.a(), f.b(), f.n()
(1, 0.0, '')
>>> f.set(1,1.0)
>>> f.a(), f.b(), f.n()
(1, 1.0, '')
>>> f.set(1,1.0,"1")
>>> f.a(), f.b(), f.n()
(1, 1.0, '1')
>>> f.set(a=1)
>>> f.a(), f.b(), f.n()
(1, 0.0, '')
>>> f.set(b=1)
>>> f.a(), f.b(), f.n()
(0, 1.0, '')
>>> f.set(n="1")
>>> f.a(), f.b(), f.n()
(0, 0.0, '1')
>>> f.set(1,n="1")
>>> f.a(), f.b(), f.n()
(1, 0.0, '1')
>>> f.set2(b=2.0,n="2",a=2)
>>> f.a(), f.b(), f.n()
(2, 2.0, '2')

# lets see how badly we've broken the 'regular' functions
>>> f = Bar()
>>> f.a(), f.b(), f.n()
(0, 0.0, '')
>>> f = Bar(1)
>>> f.a(), f.b(), f.n()
(1, 0.0, '')
>>> f = Bar(1,1.0)
>>> f.a(), f.b(), f.n()
(1, 1.0, '')
>>> f = Bar(1,1.0,"1")
>>> f.a(), f.b(), f.n()
(1, 1.0, '1')
>>> f.set()
>>> f.a(), f.b(), f.n()
(0, 0.0, '')
>>> f.set(1)
>>> f.a(), f.b(), f.n()
(1, 0.0, '')
>>> f.set(1,1.0)
>>> f.a(), f.b(), f.n()
(1, 1.0, '')
>>> f.set(1,1.0,"1")
>>> f.a(), f.b(), f.n()
(1, 1.0, '1')
'''




def run(args = None):
    import sys
    import doctest

    if args is not None:
        sys.argv = args
    return doctest.testmod(sys.modules.get(__name__))
    
if __name__ == '__main__':
    print "running..."
    import sys
    status = run()[0]
    if (status == 0): print "Done."
    sys.exit(status)

