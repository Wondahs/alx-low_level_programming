#!/usr/bin/python3
"""
Module containing 
function island_perimeter(grid):
that returns the perimeter of the island described in grid.
"""

def island_perimeter(grid):
	"""
	Returns the perimeter of the island described in grid.
	"""

	length = 0
	true_length = 0
	height = 0
	has_height = False
	for row in grid:
		has_height = False
		if length:
			true_length = length
		length = 0
		for column in row:
			if column == 1 and not has_height:
				height += 1
				has_height = True
			length += column
	return 2 * (true_length + height)