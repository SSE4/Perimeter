'''
>>> from multi_arg_constructor_ext import *
>>> a = A(1.0, 2, 3, 4, 5, 6, 7.0, 8.1, 9.3)
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
