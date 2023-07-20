# Number to save in binary format (906609 in decimal)
number = 906609

# Save the number in binary format as a binary file
with open("102-result", "wb") as file:
    file.write(number.to_bytes(6, byteorder='big'))
