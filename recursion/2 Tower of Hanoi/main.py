def tower_of_hanoi(n, from_rod, to_rod, aux_rox):
	if n == 1:
		print(f'Move disc 1 from rod: {from_rod} to {to_rod}.')
		return
	tower_of_hanoi(n-1, from_rod, aux_rox, to_rod)
	print(f'Move disc 1 from rod: {from_rod} to {to_rod}.')
	tower_of_hanoi(n-1, aux_rox, to_rod, from_rod) 


if __name__ == '__main__':

	n = 3
	tower_of_hanoi(n, 'A', 'C', 'B')
