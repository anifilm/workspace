from urllib.parse import parse_qs

my_values = parse_qs('red=5&blue=0&green=', keep_blank_values=True)

print(repr(my_values))
# {'red': ['5'], 'blue': ['0'], 'green': ['']}


print('Red:    ', my_values.get('red'))
print('Green:  ', my_values.get('green'))
print('Opacity: ', my_values.get('opacity'))
# Red:     ['5']
# Green:   ['']
# Opacity: None


# 쿼리 문자열: 'red=5&blue=0&green='
red = my_values.get('red', [''])[0] or 0
green = my_values.get('green', [''])[0] or 0
opacity = my_values.get('opacity', [''])[0] or 0
print('Red:     %r' % red)
print('Green:   %r' % green)
print('Opacity: %r' % opacity)
# Red:     '5'
# Green:   0
# Opacity: 0

red = int(my_values.get('red', [''])[0] or 0)
green = int(my_values.get('green', [''])[0] or 0)
opacity = int(my_values.get('opacity', [''])[0] or 0)
print('Red:     %r' % red)
print('Green:   %r' % green)
print('Opacity: %r' % opacity)
# Red:     5
# Green:   0
# Opacity: 0

red = my_values.get('red', [''])
red = int(red[0]) if red[0] else 0
green = my_values.get('green', [''])
green = int(green[0]) if green[0] else 0
opacity = my_values.get('opacity', [''])
opacity = int(opacity[0]) if opacity[0] else 0
print('Red:     %r' % red)
print('Green:   %r' % green)
print('Opacity: %r' % opacity)
# Red:     5
# Green:   0
# Opacity: 0

green = my_values.get('green', [''])
if green[0]:
    green = int(green[0])
else:
    green = 0
print('Green:   %r' % green)
# Green:   0

def get_first_int(values, key, default=0):
    found = values.get(key, [''])
    if found[0]:
        found = int(found[0])
    else:
        found = default
    return found

green = get_first_int(my_values, 'green')
print('Green:   %r' % green)
# Green:   0
