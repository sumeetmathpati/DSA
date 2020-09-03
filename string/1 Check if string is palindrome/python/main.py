

def is_palindrome(str):

    l = 0
    r = len(str) - 1

    while (r > l):
        if (str[l] != str[r]):
            return False
        r -= 1
        l += 1

    return True

if __name__ == '__main__':

    str = 'sumeee'

    if is_palindrome(str):
        print('String is palindrome.')
    else:
        print('String is not palindrome.')