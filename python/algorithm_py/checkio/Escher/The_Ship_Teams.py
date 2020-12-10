def two_teams(sailors):
    team_a = []
    team_b = []
    
    for name in sailors.keys():
        if sailors.get(name) > 40 or sailors.get(name) < 20:
            team_a += [name]
        elif 20 <= sailors.get(name) <= 40:
            team_b += [name]
    
    team_a.sort()
    team_b.sort()

    return [team_a, team_b]
    

if __name__ == '__main__':
    print("Example:")
    print(two_teams({'Smith': 34, 'Wesson': 22, 'Coleman': 45, 'Abrahams': 19}))

    #These "asserts" using only for self-checking and not necessary for auto-testing
    assert two_teams({
        'Smith': 34, 
        'Wesson': 22, 
        'Coleman': 45, 
        'Abrahams': 19}) == [
            ['Abrahams', 'Coleman'], 
            ['Smith', 'Wesson']
            ]

    assert two_teams({
        'Fernandes': 18,
        'Johnson': 22,
        'Kale': 41,
        'McCortney': 54}) == [
            ['Fernandes', 'Kale', 'McCortney'], 
            ['Johnson']
            ]
    print("Coding complete? Click 'Check' to earn cool rewards!")
