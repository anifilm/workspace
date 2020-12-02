import pygame, sys

def draw_background():
    screen.blit(bg_surface, (bg_x_pos, 0))
    screen.blit(bg_surface, (bg_x_pos + 576, 0))
def draw_floor():
    screen.blit(floor_suface, (floor_x_pos, 900))
    screen.blit(floor_suface, (floor_x_pos + 576, 900))

pygame.init()
screen = pygame.display.set_mode((576, 1024))
clock = pygame.time.Clock()

bg_surface = pygame.image.load('assets/sprites/background-day.png').convert()
bg_surface = pygame.transform.scale2x(bg_surface)
bg_x_pos = 0

floor_suface = pygame.image.load('assets/sprites/base.png').convert()
floor_suface = pygame.transform.scale2x(floor_suface)
floor_x_pos = 0

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    bg_x_pos -= 0.1
    draw_background()
    if bg_x_pos <= -576:
        bg_x_pos = 0
        
    floor_x_pos -= 1
    draw_floor()
    if floor_x_pos <= -576:
        floor_x_pos = 0

    pygame.display.update()
    clock.tick(120)
