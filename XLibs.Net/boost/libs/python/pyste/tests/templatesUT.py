import unittest
from _templates import *

class TemplatesTest(unittest.TestCase):

    def testIt(self):  
        fp = FPoint()
        fp.i = 3.0
        fp.j = 4.0
        ip = IPoint()
        ip.x = 10
        ip.y = 3

        self.assertEqual(fp.i, 3.0)
        self.assertEqual(fp.j, 4.0)
        self.assertEqual(ip.x, 10)
        self.assertEqual(ip.y, 3)
        self.assertEqual(type(fp.i), float)
        self.assertEqual(type(fp.j), float)
        self.assertEqual(type(ip.x), int)
        self.assertEqual(type(ip.y), int)
                
                

if __name__ == '__main__':
    unittest.main() 
