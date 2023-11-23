from pynput.keyboard import Key, KeyCode, Listener

KONAMI_CODE = [
    Key.up, Key.up, Key.down, Key.down,
    Key.left, Key.right, Key.left, Key.right,
    KeyCode.from_char("b"), KeyCode.from_char("a")
]

keyStep = 0
last = Key.esc

def konami(key):

		global keyStep, last

		if key == Key.esc:
			print("Saliendo...")
			return False
		
		if key == KONAMI_CODE[keyStep]:
				keyStep += 1
		
		elif key == KONAMI_CODE[0]:
			keyStep = 1
		else:
			keyStep = 0

		if keyStep == len(KONAMI_CODE):
				print("COMPLETADO CODIGO KONAMI")
				return False
		
		last = key


with Listener(on_press=konami) as listener:
	listener.join()