from itertools import permutations

s = input()
st = set()
for x in permutations(s):
    st.add(''.join(x))

print(len(st))
for x in sorted(st):
    print(x)
