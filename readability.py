# TODO

from cs50 import get_string

# get user input
get_text = get_string('Text: ')
length = len(get_text)

# starter counter
letters = 0
words = 1
sentences = 0


# counting letters
for i in range(length):
    if (get_text[i].isalpha()):
        letters += 1

# counting words
    if(get_text[i].isspace()):
        words += 1

# counting sentences by identifying punctuation
    if(get_text[i] == '.' or get_text[i] == '!' or get_text[i] == '?'):
        sentences += 1

# Coleman-Liau index
level = (0.0588 * letters / words * 100) - (0.296 * sentences / words * 100) - 15.8

grade = round(level)


# return grade to user
if grade < 1:
    print('Before Grade 1')
elif grade > 16:
    print('Grade 16+')
else:
    print(f"Grade {grade}")


# so lets use ord to convert the text from input string to a unicode value
# value to a interger value using ord, then take the integer value and pass it
# through the forumla, round the value from the formula
# then return the rounded value from the fomula to
# grade report print function

# so would adding the values from convert be
# sufficient to pass through the forumula?

# need word_counter, letter_counter, sentence_counter
# rerouting idea about using ord at this time
# unsure wtf is going on. Was able to compile with most checks running except for questions unsure what went wrong