def fact(a):
    factl = 1
    for i in range(1,a+1,1):  factl = factl*i
    return factl
def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        print(fact(n))
if __name__ == "__main__":main()
