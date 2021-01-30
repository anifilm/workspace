def score_of_quiz(your_score):
    k = 0
    try:
        for i in your_score:
            if 2//i == 0:
                k += 1
                return k
    except ZeroDivisionError:
        return 0
    finally:
        return k


score_of_you = [3, 4, 0]
result = score_of_quiz(score_of_you)
print(result)
