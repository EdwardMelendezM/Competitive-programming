n = int(input())
names = set()

for i in range(n):
    name = input().strip()
    if name not in names:
        print("OK")
        names.add(name)
    else:
        k = 1
        while name + str(k) in names:
            k += 1
        new_name = name + str(k)
        print(new_name)
        names.add(new_name)