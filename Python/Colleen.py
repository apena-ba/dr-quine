# This program will print its own source when run.

def printCode():
	code = "# This program will print its own source when run.{}{}def printCode():{}{}code = {}{}{}{}{}print(code.format(chr(10), chr(10), chr(10), chr(9), chr(34), code, chr(34), chr(10), chr(9), chr(10), chr(10), chr(10), chr(9), chr(10), chr(9), chr(10), chr(10))){}{}def main():{}{}# Main comment{}{}printCode(){}{}main()"
	print(code.format(chr(10), chr(10), chr(10), chr(9), chr(34), code, chr(34), chr(10), chr(9), chr(10), chr(10), chr(10), chr(9), chr(10), chr(9), chr(10), chr(10)))

def main():
	# Main comment
	printCode()

main()
