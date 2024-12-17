time_str = input()
split_str = time_str.split(":")

if split_str[2][2] == "A" and split_str[0] == "12":
    split_str[0] = "00"
elif split_str[2][2] == "P" and split_str[0] != "12":
    split_str[0] = str(int(split_str[0]) + 12)

split_str[2] = split_str[2][:2]

converted_time = ":".join(split_str)
print(converted_time)
