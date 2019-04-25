#Stephen Barton
#Python Exercises, Hangman
#24 APR 2019

def play(word):
    """ Play one game of Hangman for the given word.  Returns True if the
        player wins, False if the player loses. """
    gallows = Gallows()
    wrong_guesses = 0                           # number of incorrect guesses
    blanks = set_blanks(word)                   # blanks which hide each letter of the word until guessed
    used = []                                   # list of used letters

    while True:
        new_page()
        print(gallows.get_image(wrong_guesses))
        print(' '.join(blanks))
        print(' '.join(used))

        guess = input("Guess a letter: ")
        blanks, used, missed = check_letter(word, guess.lower(), blanks, used)

        if blanks == list(word):
            return endgame(True, word)
        elif missed and wrong_guesses >= 6:
            return endgame(False, word)
        elif missed:
            wrong_guesses += 1

def endgame(won, word):
    print('')
    if won:
        print("Congratulations, you win!")
        print("You correctly guessed the word '%s'!" % word)
    else:
        print("Nice try! Your word was '%s'." % word)
    return won

def play_again():
    while True:
        play_again = input("Play again? [y/n] ")
        if 'y' in play_again.lower():
            return True
        elif 'n' in play_again.lower():
            return False
        else:
            print("Huh?")


def main(words_file='test.txt'):
    wordlist = Wordlist(words_file)

    new_page()
    print("\nWelcome to Hangman!")
    print("Guess the word before the man is hanged and you win!")
    input("\n\t---Enter to Continue---\n")
    new_page()

    while True:
        play(wordlist.new_word())
        if not play_again():
            break
