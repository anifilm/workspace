from p_study_01_1_class import SoccerPlayer

# 5명 Soccer Player 정보 저장하기

# - 2차원 리스트 사용시
names = ["Jin", "Sungchul", "Ronaldo", "Hong", "Seo"]
positions = ['MF', 'DF', 'CF', 'WF', 'GK']
numbers = [10, 15, 20, 3, 1]

players = [[name, position, number] for name, position, number in zip(names, positions, numbers)]

# print(players)
print(players[0])
print()

# - Class로 선언하기
player_objects = [SoccerPlayer(name, position, number) for name, position, number in zip(names, positions, numbers)]

print(player_objects[0])
