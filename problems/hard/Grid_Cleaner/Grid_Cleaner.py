def Grid_Cleaner(grid, col, row, n, direction=0):
    # Direction deltas: N, E, S, W
    directions = [(-1, 0), (0, 1), (1, 0), (0, -1)]

    for _ in range(n):
        # Ensure current row exists
        if row < 0:
            grid.insert(0, [0] * len(grid[0]))
            row = 0
        elif row >= len(grid):
            grid.append([0] * len(grid[0]))
        
        # Ensure current column exists
        if col < 0:
            for r in grid:
                r.insert(0, 0)
            col = 0
        elif col >= len(grid[0]):
            for r in grid:
                r.append(0)

        # Read current tile
        tile = grid[row][col]

        if tile == 1:
            # Clean tile: turn right, mark dirty
            direction = (direction + 1) % 4
            grid[row][col] = 0
        else:
            # Dirty tile: turn left, mark clean
            direction = (direction - 1) % 4
            grid[row][col] = 1

        # Move forward
        d_row, d_col = directions[direction]
        row += d_row
        col += d_col

    return grid
