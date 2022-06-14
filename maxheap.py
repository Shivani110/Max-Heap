def MaxHeap(a, x):
    left = p(x)
    right = q(x)
    if left < len(a) and a[left] > a[x]:
        high = left
    else:
        high = x
    if right < len(a) and a[right] > a[high]:
        high = right
    if high != x:
        a[x], a[high] = a[high], a[x]
        MaxHeap(a, high)

def p(x):
    return 2 * x + 1

def q(x):
    return 2 * x + 2

def createheap(a):
    z = int((len(a) // 2) - 1)
    for x in range(z, -1, -1):
        MaxHeap(a, x)

a = [10, 5, 7, 11, 3, 20]
createheap(a)
print(a)
