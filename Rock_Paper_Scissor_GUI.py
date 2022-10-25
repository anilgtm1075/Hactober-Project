import random

from tkinter import *


def computer_guess():
    return random.choice(['rock', 'paper', 'scissors'])


def result(human_choice, computer_choice):
    global human_score
    global computer_score

    if human_choice == computer_choice:
        print("Tie")

    elif human_choice == 'rock':
        if computer_choice == 'paper':
            print("You lose!", computer_choice, "covers", human_choice)
            computer_score += 1
        else:
            print("You win!", human_choice, "smashes", computer_choice)
            human_score += 1

    elif human_choice == 'paper':
        if computer_choice == 'scissors':
            print("You lose!", computer_choice, "cut", human_choice)
            computer_score += 1
        else:
            print("You win!", human_choice, "covers", computer_choice)
            human_score += 1

    elif human_choice == 'scissors':
        if computer_choice == 'rock':
            print("You lose...", computer_choice, "smashes", human_choice)
            computer_score += 1
        else:
            print("You win!", human_choice, "cut", computer_choice)
            human_score += 1

    print("Score: Human = ", human_score, "Computer = ", computer_score)


def main():
    global human_score
    global computer_score
    human_score = 0
    computer_score = 0
    human_choice = ''
    computer_choice = ''

    root = Tk()
    root.title("Rock, Paper, Scissors")

    Label(root, text="Choose Your Weapon").pack()

    Button(root, text="Rock", command=lambda: result(
        'rock', computer_guess())).pack(fill="x")
    Button(root, text="Paper", command=lambda: result(
        'paper', computer_guess())).pack(fill="x")
    Button(root, text="Scissors", command=lambda: result(
        'scissors', computer_guess())).pack(fill="x")

    root.mainloop()


main()
