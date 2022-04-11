import sys

N, M = map(int,sys.stdin.readline().split())

pokemon = {}
for _ in range(N):
    pokemon_name = str(sys.stdin.readline().rstrip())
    pokemon[pokemon_name] = str(_+1)
    pokemon[str(_+1)] = pokemon_name

for _ in range(M):
    print(pokemon[str(sys.stdin.readline().rstrip())])
    
    
