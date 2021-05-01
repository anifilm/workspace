# 멀티프로레싱
import multiprocessing

# CPU의 스레드 개수를 정수값으로 반환
get_cpu_count = multiprocessing.cpu_count()
print(get_cpu_count)
