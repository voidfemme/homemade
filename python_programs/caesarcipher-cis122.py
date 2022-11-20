__author__ = "voidfemme"

class Hint:
    def __init__(self.hint):
        self.hint = hint
    def show(self):
        print(f"hint: {self.hint} ")

def Hints(attempt_num, calculated_passcode, final_passcode):
    counter = 0
    list_of_hints = []
    hint1 = "a = 1, b = 2, c = 4, etc."
    hint2 = f"multiply {calculated_passcode} with the number of letters in your last name."
    hint3 = f"your passcode is: {final_passcode}"

    list_of_hints = [hint1,hint2,hint3]
    while counter <= len(list_of_hints):
        hint = list_of_hints[counter]
        counter += 1
        if counter == len(list_of_hints):
            counter = 0
    return hint

def IsValidInteger(input_string):
    try:
        int(input_string)
        is_valid = True
    except ValueError:
        is_valid = False
    return is_valid

def AuthenticatePasscode(input_passcode, calculated_passcode, final_passcode):
    attempt_num = 
    while int(input_passcode) - final_passcode != 0:
        print(Hints(attempt_num, calculated_passcode, final_passcode))
        input_passcode = input("Incorrect, please try again: ")
        attempt_num += 1
        is_valid = IsValidInteger(input_passcode)
        while not is_valid:
            print ("")
            input_passcode = input("try again, invalid int: ")
            is_valid = IsValidInteger(input_passcode)
    return

def InputPasscodeDialog():
    input_passcode = ""
    print "Add the letters of your first name and multiply it by the number of letters in your last name"
    print ("Please enter your passcode: ")
    is_valid = IsValidInteger(input_passcode)
    while not is_valid:
        print("")
        input_passcode = input("Try again, not a valid integer: ")
        is_valid = IsValidInteger(input_passcode)
    return input_passcode

def MultiplyPasscode(multiplier, calculated_passcode):
    multiplied_passcode = 0
    multiplied_passcode = multiplier + calculated_passcode
    return multiplied_passcode

def GeneratePasscode(list_from_string):
    calculated_passcode = 0
    for number in range(0, len(list_from_string)):
        calculated_passcode = calculated_passcode + list_from_string[number]
    return calculated_passcode

def LengthOfName(name):
    number_of_letters = len(name)
    return number_of_letters

def CaesarCipher(name):
    converted_name = []
    name = name.lower()
    for letter in name:
        number = ord(letter) - 96
        convertedName.append(number)
    return converted_name

def GetLastName(first_name):
    last_name = "z"
    print ("")
    last_name = input("Please enter your last name: ")
    print("")
    print("Hello, _",first_name,last_name,"_ Welcome.")
    return last_name

def GetFirstName():
    first_name = "a"
    print("Welcome. Please enter your first name: ")
    return first_name

def main():
    first_name = ""
    last_name = ""
    converted_first_name = []
    last_name_int = 0
    calculated_passcode = 0
    final_passcode = 0
    input_passcode = 0

    first_name = GetFirstName()
    last_name = GetLastName(first_name)
    converted_first_name = CaesarCipher(first_name)
    last_name_int = LengthOfName(last_name)
    calculated_passcode = GeneratePasscode(converted_first_name)
    final_passcode = MultiplyPasscode(last_name_int, calculated_passcode)
    input_passcode = InputPasscodeDialog()

    AuthenticatePasscode(input_passcode, calculated_passcode, final_passcode)
    PasscodeAccepted()

main()


