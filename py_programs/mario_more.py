def main():
    n = get_height()
# method 1 (this works)
    z = int(n)
    for i in range(n): # for (int i = 0; i < n; i++)
        for j in range(z, z-1, -1):
            # print(f"{j}, {i}")
            print(' ' * (j-1), end = "")
            print('#' * (i+1), end = "")
            print('  ', end = "")
            print('#' * (i+1))
            z -= 1
        # print()

# method 2 (this should be correct too)
    # for i in range(n):
    #     for j in range(0, n+i+3):
    #         if (j == n or j == n+1 or i+j < n-1):
    #             print(" ", end="")
    #         else:
    #             print("#", end="")
    #     print()

def get_height():
    while True:
        try:
          height = int(input("Height: "))
          if height > 0 and height < 9:   # get an input from 1 to 8
            return height
        except ValueError:
          print("Input must be an integer more than 0 and less than 9")

main()
