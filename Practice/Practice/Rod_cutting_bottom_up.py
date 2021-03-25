# Rod cutting bottom up - CLRS

def rod_cut_bottom_up(rod_length : int, prices_each_cut : list) -> int:
    revenues = [0 for _ in range(rod_length + 1)]
    for piece_length in range(1, rod_length + 1):
        max_price = -1
        for left_piece_length in range(1, piece_length + 1):
            right_piece_length = piece_length - left_piece_length
            max_price = max(max_price, prices_each_cut[left_piece_length] + revenues[right_piece_length])

        revenues[piece_length] = max_price
        print(f"Max price for length {piece_length} is {max_price}")

    return revenues[rod_length]


prices_each_cut = [0, 1, 2, 2, 6, 4, 5, 3, 2, 7, 5]
rod_length = 10

# Define a price of 0 for 0 length

print(rod_cut_bottom_up(rod_length, prices_each_cut))