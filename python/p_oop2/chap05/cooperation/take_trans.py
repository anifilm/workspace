from class_module import *


def main():
    student_james = Student("James", 5000)
    student_tomas = Student("Tomas", 10000)

    bus100 = Bus(100)
    bus500 = Bus(500)

    subway_green = Subway(2)
    subway_blue = Subway(4)

    student_james.take_bus(bus100)
    student_tomas.take_subway(subway_green)

    student_james.show_info()
    student_tomas.show_info()

    bus100.show_bus_info()
    bus500.show_bus_info()

    subway_green.show_subway_info()

    student_edward = Student("Edward", 20000)
    well_taxi = Taxi("잘 간다 운수")
    student_edward.take_taxi(well_taxi)

    student_edward.show_info()
    well_taxi.show_taxi_info()


if __name__ == '__main__':
    main()
