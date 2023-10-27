v = int(input('Vetrex '))
e = int(input('Edges: '))
adj = [0]*v

for i in range(v):
    adj[i] = list()

# print(adj)
for i in range(e):
    a = int(input())
    b = int(input())
    adj[a].append(b)
    adj[b].append(a)
print('Adjancy list: ')
for i in range(v):
    print(i,":",end='')
    for j in adj[i]:
        print(j,"",end='')
    print()
    
    

