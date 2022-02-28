import string

if __name__ == "__main__":
    map = {}
    for alpha in string.ascii_lowercase:
        map[alpha] = -1
    
    a = input()
    
    for c in a:
        map[c] = a.index(c)
    
    for c in string.ascii_lowercase:
        print(map[c], end=' ')
