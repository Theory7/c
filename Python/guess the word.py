word = "Love"
player = ""
player_count = 0
play_limit = 3
out_of_guesses = False 

while player != word and not(out_of_guesses):
    if player_count < play_limit:
       player = input("Enter word: ")
       player_count += 1
    else:
        out_of_guesses = True

if out_of_guesses:
    print("yOu lOse!")
else:
    print("YoU wIn!")