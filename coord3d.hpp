class Coord3d
{
private:
    double c_x{};
    double c_y{};
    double c_z{};
public:
    Coord3d();
    Coord3d(int);
    Coord3d(int,int,int);
    ~Coord3d() = default;
    void readCoords();
    Coord3d operator+(double);
    Coord3d operator+(const Coord3d&);
    Coord3d operator-(double);
    Coord3d operator-(const Coord3d&);
    Coord3d operator=(double);
    Coord3d operator=(const Coord3d&);

};
