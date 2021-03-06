#pragma once

struct help_item {
	char *puzzle;
	Platform::String ^synopsis;
};

const struct help_item helpitems[] {
	{ "Black Box", "Find the hidden balls in the box by bouncing laser beams off them."},
	{ "Bridges", "Connect all the islands with a network of bridges." },
	{ "Cube", "Pick up all the blue squares by rolling the cube over them." },
	{ "Dominosa", "Tile the rectangle with a full set of dominoes." },
	{ "Fifteen", "Slide the tiles around to arrange them into order." },
	{ "Filling", "Mark every square with the area of its containing region." },
	{ "Flip", "Flip groups of squares to light them all up at once." },
	{ "Flood", "Turn the grid the same colour in as few flood fills as possible." },
	{ "Galaxies", "Divide the grid into rotationally symmetric regions each centred on a dot." },
	{ "Guess", "Guess the hidden combination of colours." },
	{ "Inertia", "Collect all the gems without running into any of the mines." },
	{ "Keen", "Complete the latin square in accordance with the arithmetic clues." },
	{ "Light Up", "Place bulbs to light up all the squares." },
	{ "Loopy", "Draw a single closed loop, given clues about number of adjacent edges." },
	{ "Magnets", "Place magnets to satisfy the clues and avoid like poles touching." },
	{ "Map", "Colour the map so that adjacent regions are never the same colour." },
	{ "Mines", "Find all the mines without treading on any of them." },
	{ "Net", "Rotate each tile to reassemble the network." },
	{ "Netslide", "Slide a row at a time to reassemble the network." },
	{ "Palisade", "Divide the grid into equal-sized areas in accordance with the clues." },
	{ "Pattern", "Fill in the pattern in the grid, given only the lengths of runs of black squares." },
	{ "Pearl", "Draw a single closed loop, given clues about corner and straight squares." },
	{ "Pegs", "Jump pegs over each other to remove all but one." },
	{ "Range", "Place black squares to limit the visible distance from each numbered cell." },
	{ "Rectangles", "Divide the grid into rectangles with areas equal to the numbers." },
	{ "Same Game", "Clear the grid by removing touching groups of the same colour squares." },
	{ "Signpost", "Connect the squares into a path following the arrows." },
	{ "Singles", "Black out the right set of duplicate numbers." },
	{ "Sixteen", "Slide a row at a time to arrange the tiles into order." },
	{ "Slant", "Draw a maze of slanting lines that matches the clues." },
	{ "Solo", "Fill in the grid so that each row, column and block contains one of every digit." },
	{ "Tents", "Place a tent next to each tree." },
	{ "Towers", "Complete the latin square of towers in accordance with the clues." },
	{ "Train Tracks", "Fill in the railway track according to the clues." },
	{ "Twiddle", "Rotate the tiles around themselves to arrange them into order." },
	{ "Undead", "Place monsters so that the right numbers of them can be seen in mirrors." },
	{ "Unequal", "Complete the latin square in accordance with the > signs." },
	{ "Unruly", "Fill in the black and white grid to avoid runs of three." },
	{ "Untangle", "Reposition the points so that the lines do not cross." },
};
