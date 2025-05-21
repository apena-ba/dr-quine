import os

i = 5

def copyAndRun(filename):
	with open(filename, 'w') as f:
		content = "import os{}{}i = {}{}{}def copyAndRun(filename):{}{}with open(filename, 'w') as f:{}{}{}content = {}{}{}{}{}{}f.write(content.format(chr(10), chr(10), i - 1, chr(10), chr(10), chr(10), chr(9), chr(10), chr(9), chr(9), chr(34), content, chr(34), chr(10), chr(9), chr(9), chr(10), chr(9), chr(10), chr(10), chr(10), chr(9))){}{}os.system('python3 ' + filename){}{}if i >= 0:{}{}copyAndRun('Sully_' + str(i) + '.py')"
		f.write(content.format(chr(10), chr(10), i - 1, chr(10), chr(10), chr(10), chr(9), chr(10), chr(9), chr(9), chr(34), content, chr(34), chr(10), chr(9), chr(9), chr(10), chr(9), chr(10), chr(10), chr(10), chr(9)))
	os.system('python3 ' + filename)

if i >= 0:
	copyAndRun('Sully_' + str(i) + '.py')