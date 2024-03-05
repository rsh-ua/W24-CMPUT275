
def sieve(n):
  lst = list(range(2,n+1))
  i = 0
  while i < len(lst):
    cur = lst[i]
    j = i+1
    while (j < len(lst)):
      if (lst[j]%cur == 0):
        lst.pop(j)
      else:
        j +=1
    i = i + 1
  for prime in lst:
    print(prime, end=" ")
  print()

n = int(input())
sieve(n)
