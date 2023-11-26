from unittest import square

def main():
    x = int(input("What's x? "))
    test_square(x)

def test_square(y):
    try:
        assert square(y) == y*y
        print("pass")
    except AssertionError:
        print(f"{y} squared was not {y*y}")


if __name__ == "__main__":
    main()
