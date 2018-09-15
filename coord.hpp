#ifndef COORD_HPP
#define COORD_HPP
/*A class that define coordonates in latitudes longitudes*/

class Coord
{
public:
    Coord();

    static void toCase(Coord const& c); //Static function that transform coordonates into something to know what soldier will be affected etc...
}

#endif // COORD_HPP
