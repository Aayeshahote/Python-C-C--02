# Program for Valid Parenthesis

def is_valid(s):
    stack=[]
    brackets={'(':')','[':']','{':'}'}
    for char in s:
        if char in brackets:
            stack.append(char)
        elif char in brackets.values():
            if (len(stack)==0 or [brackets.pop()]!=char):
                return False

s=input("Enter a string: ")
valid = is_valid(s)
print("True" if valid else "False")