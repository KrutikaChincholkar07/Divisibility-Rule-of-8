num = int(input("Enter a number: "))

last_three = num % 1000

if last_three % 8 == 0:
    print(num, "is divisible by 8")
else:
    print(num, "is not divisible by 8")
