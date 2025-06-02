def print_mem_file(filename):
    BLACK_SQUARE = '⬛'
    WHITE_SQUARE = '⬜'

    with open(filename, 'r') as file:
        lines = file.readlines()

        # if len(lines) != 256:
        #     raise ValueError("File must contain exactly 256 lines")

        for row_num, line in enumerate(lines):
            line = line.strip()
            # if len(line) != 256 or any(c not in '01' for c in line):
            #     raise ValueError(f"Invalid line at row {row_num}: Must contain exactly 256 binary digits")

            visual_row = ''.join(WHITE_SQUARE if c == '1' else BLACK_SQUARE for c in line)
            print(visual_row)
            


if __name__ == "__main__":
    print_mem_file("./tests/conway_tb/mem.txt")
    
