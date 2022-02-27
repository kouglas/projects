# TODO

from cs50 import get_float

# prompt user for float value
while True:
    owed = get_float("Change owed?: ")
    # converts float to coins
    coins = round(owed * 100)
    if owed > 0:
        break

# determines quartes then dimes then nickels then pennies

quarters = coins // 25
dimes = (coins % 25) // 10
nickels = ((coins % 25) % 10) // 5
pennies = ((coins % 25) % 10) % 5

print(f"{quarters + dimes + nickels + pennies}")