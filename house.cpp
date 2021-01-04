#include "house.h"

House::House() {
    id = 0;
    number_house = 0;
    square = 0;
    floor = 0;
    count_room = 0;
    street = "";
}

House::House(int id, int number_house, int square, int floor, int count_room, std::string street) {
    this->id = id;
    this->number_house = number_house;
    this->square = square;
    this->floor = floor;
    this->count_room = count_room;
    this->street = street;
}

House::House(const House& object) {
    id = object.id;
    number_house = object.number_house;
    square = object.square;
    floor = object.floor;
    count_room = object.count_room;
    street = object.street;
}

House::~House() {

}

std::istream& operator >>(std::istream& in, House& x) {

    in >> x.id >> x.number_house >> x.square >> x.floor >> x.count_room >> x.street;

    return in;
}