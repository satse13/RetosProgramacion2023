import time

def cuentaAtras(start, seconds): 
	s = int(start)
	sec = int(seconds)

	cont = s
	for number in range(s, -1,-1):
			print(number)
			time.sleep(sec)
	
	print("BOOM")


cuentaAtras(10, 1)