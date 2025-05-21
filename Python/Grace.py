import os

OPEN = lambda o: open(o, 'w')
STR = "import os{}{}OPEN = lambda o: open(o, 'w'){}STR = {}{}{}{}FT = lambda s: OPEN('Grace_kid.py').write(s.format(chr(10), chr(10), chr(10), chr(34), s, chr(34), chr(10), chr(10), chr(10), chr(10), chr(10))){}{}# Comment{}{}FT(STR)"
FT = lambda s: OPEN('Grace_kid.py').write(s.format(chr(10), chr(10), chr(10), chr(34), s, chr(34), chr(10), chr(10), chr(10), chr(10), chr(10)))

# Comment

FT(STR)